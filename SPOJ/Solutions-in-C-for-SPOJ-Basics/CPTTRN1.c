#include <stdio.h>

int main(void) {
    char b[2]={'*','.'};
    int n,i,j,k,l,c;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        scanf("%d%d",&l,&c);
        for(j=0;j<l;j++) {
            for(k=0;k<c;k++)
                printf("%c",b[(j+k)&1]);
            printf("\n");
        }
        printf("\n");
    }
}
