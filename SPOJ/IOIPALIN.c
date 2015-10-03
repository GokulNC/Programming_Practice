// IOIPALIN - Palindrome 2000
// Hint:  http://www.geeksforgeeks.org/dynamic-programming-set-4-longest-common-subsequence/
#include<stdio.h>
#include<stdlib.h>
int main(void) {
    char *s;
    int n,i,j,k,*L[2];
    scanf("%d",&n);
    s=(char*)malloc(n*sizeof(char));
    scanf("%s",s);
    L[0]=(int *)malloc((n+1)*sizeof(int));
    L[1]=(int *)malloc((n+1)*sizeof(int));
    for(i=1;i<=n;i++) {
        for(j=1,k=n;j<=n;j++,k--) {
            if(s[i-1]==s[k-1]) L[i&1][j]=L[!(i&1)][j-1]+1;
            else L[i&1][j]=(L[!(i&1)][j]>L[i&1][j-1])?L[!(i&1)][j]:L[i&1][j-1];
        }
    }
    printf("%d",n-L[n&1][n]);
}
