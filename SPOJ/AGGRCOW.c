// AGGRCOW - Aggressive cows
// Hint: https://www.topcoder.com/community/data-science/data-science-tutorials/binary-search/ 
#include<stdio.h>
long int N,stall[100000],C;
int canBePlaced(long int dist) {
    long int placedCows=1,i,prev=stall[0];
    for(i=1;i<N;i++) 
        if(stall[i]-prev>=dist) {
            placedCows++;
            if(placedCows==C) return 1;
            prev=stall[i];
        }
    return 0;
}
int main() {
    long int t,i,j,k,tmp;
    scanf("%ld",&t);
    while(t--) {
        scanf("%ld %ld",&N,&C);
        for(i=0;i<N;i++) {
            scanf("%ld",&tmp);
            for(k=i;k>0&&stall[k-1]>tmp;--k) stall[k]=stall[k-1]; //Insertion Sort
            stall[k]=tmp;
        }
        for(i=0,j=stall[N-1],k=(i+j)/2;i<j;k=(i+j)/2) {
            if(canBePlaced(k)) i=k+1;
            else j=k;
        }
        printf("%ld\n",i-1);
    }
}
