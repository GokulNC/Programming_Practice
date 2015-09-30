//SMPDIV - Divisibility
#include<stdio.h>
int main(void) {
    int t,n,x,y,i;
    scanf("%d",&t);
    while(t--) {
        scanf("%d%d%d",&n,&x,&y);
        for(i=1;i<n;i++)
            if(i%x==0&&i%y!=0) printf("%d ",i);
        printf("\n");
    }
}
