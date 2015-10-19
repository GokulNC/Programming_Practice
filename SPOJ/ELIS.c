// ELIS - Easy Longest Increasing Subsequence
#include<stdio.h>
int main() {
    int i,j,N,A[10],len[10],max;
    scanf("%d",&N);
    for(i=0;i<N;i++) scanf("%d",&A[i]);
    for(i=0;i<N;i++) len[i]=1;
    for(i=1;i<N;i++) 
        for(j=0;j<i;j++)
            if(A[i]>A[j]&&len[i]<len[j]+1) len[i]=len[j]+1;
        for(max=0,i=0;i<N;i++) max=len[i]>max?len[i]:max;
        printf("%d",max);
}
