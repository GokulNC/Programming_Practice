//CPTTRN6 - Character Patterns (Act 6)
#include <stdio.h>
int main() {
    int t,l,c,h,w,i,j,n;
    scanf("%d",&t);
    for(n=0;n<t;n++) {
        scanf("%d%d%d%d",&l,&c,&h,&w);
        for(i=0;i<(l+1)*(h+1)-1;i++) {
            for(j=0;j<(c+1)*(w+1)-1;j++) {
                if((i+1)%(h+1)==0) {
                    if((j+1)%(w+1)==0) printf("+");
                    else printf("-");
                }
                else if((j+1)%(w+1)==0) printf("|");
                else printf(".");
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
