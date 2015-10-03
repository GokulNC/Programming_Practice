// AIBOHP - Aibohphobia
// Hint:  http://www.geeksforgeeks.org/dynamic-programming-set-4-longest-common-subsequence/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void) {
    char s[6100];
    int t,n,i,j,k,*L[2];
    scanf("%d",&t);
    while(t--) {
        scanf("%s",s);
        n=strlen(s);
        L[0]=(int *)malloc((n+1)*sizeof(int));
        L[1]=(int *)malloc((n+1)*sizeof(int));
        for(j=0;j<=n;j++) { L[0][j]=0; L[1][j]=0; } //To make L[][] empty of shit
        for(i=1;i<=n;i++) {
           for(j=1,k=n;j<=n;j++,k--) {
                if(s[i-1]==s[k-1]) L[i&1][j]=L[!(i&1)][j-1]+1;
                else L[i&1][j]=(L[!(i&1)][j]>L[i&1][j-1])?L[!(i&1)][j]:L[i&1][j-1];
                //printf("%d\t",L[i&1][j]);
           }
           //printf("\n");
        }
        printf("%d\n",n-L[n&1][n]);
        free(L[0]); free(L[1]); 
    }
}
