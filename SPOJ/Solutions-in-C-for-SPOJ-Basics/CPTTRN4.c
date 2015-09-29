//CPTTRN4 - Character Patterns (Act 4)
#include <stdio.h>
int main() {
    int t,l,c,h,w,i,j,n;
    scanf("%d",&t);
    for(n=0;n<t;n++) {
        scanf("%d%d%d%d",&l,&c,&h,&w);
        for(i=0;i<l*(h+1)+1;i++) {
            for(j=0;j<c*(w+1)+1;j++) {
               if(i%(h+1)==0 || j%(w+1)==0) printf("*");
               else printf(".");
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
