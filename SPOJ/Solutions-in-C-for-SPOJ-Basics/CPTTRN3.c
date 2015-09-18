#include <stdio.h>

int main(void) {
    int n,m,i,j,k,l,c;
    scanf("%d",&n);
    for(m=1;m<=n;m++) {
        scanf("%d%d",&l,&c);
        for(i=0;i<l*3+1;i++) {
            for(j=0;j<c*3+1;j++) {
                if(i==0||i%3==0||j==0||j%3==0) printf("*");
                else printf(".");
            }
            printf("\n");
        }
        printf("\n");
    }
}
