//SMPCIRC - Two Circles
#include<stdio.h>
#include<math.h>
int main(void) {
    int t,x1,x2,y1,y2,r1,r2,dist,r;
    scanf("%d",&t);
    while(t--) {
        scanf("%d%d%d%d%d%d",&x1,&y1,&r1,&x2,&y2,&r2);
        dist=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
        r=r1>r2?r1-r2:r2-r1;
        if(dist<=r) printf("I\n");
        else if(dist>r1+r2) printf("O\n");
        else printf("E");
    }
}
