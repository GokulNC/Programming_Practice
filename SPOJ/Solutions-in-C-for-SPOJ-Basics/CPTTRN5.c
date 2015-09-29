//CPTTRN5 - Character Patterns (Act 5)
#include <stdio.h>
int main() {
    int t,l,c,s,i,j,n;
    scanf("%d",&t);
    for(n=0;n<t;n++) {
        scanf("%d%d%d",&l,&c,&s);
        for(i=0;i<l*(s+1)+1;i++) {
            for(j=0;j<c*(s+1)+1;j++) {
                if(i%(s+1)==0 || j%(s+1)==0) printf("*");
                else if(((i/(s+1))%2==0 && (j/(s+1))%2==0) || (i/(s+1))%2==1 && (j/(s+1))%2==1) {
                    if(i%(s+1)==j%(s+1)) printf("\\");
                    else printf(".");
		}
		else if( ((i/(s+1))%2==1 && (j/(s+1))%2==0) || ((i/(s+1))%2==0 && (j/(s+1))%2==1) ) {
                    if(i%(s+1) == ((s+1)-(j%(s+1)))) printf("/");
                    else printf(".");
                }	
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
