/* http://www.spoj.com/problems/CPTTRN2/ */
#include <stdio.h>

int main(void) {
    int n,i,j,k,m,l,c;
    scanf("%d",&n);
    for(m=0;m<n;m++) {
        scanf("%d%d",&l,&c);
        for(i=0;i<l;i++) {
            for(j=0;j<c;j++) {
                if(i==0||i==l-1) printf("*");
                else if(j==0||j==c-1) printf("*");
                else printf(".");
            }
            printf("\n");
        }
        printf("\n");
    }
}
