//HS12MBR - Minimum Bounding Rectangle
#include <stdio.h>
int minimum(int a,int b) {
    return a<b?a:b;
}
int maximum(int a,int b) {
    return a>b?a:b;
}
int llx,lly,urx,ury;
void set_rect_bound(int xl,int yl,int xr,int yr) {
    llx=minimum(llx,xl);
    lly=minimum(lly,yl);
    urx=maximum(urx,xr);
    ury=maximum(ury,yr);
}
int main(void) {
    int t,n,x1,x2,y1,y2,r,i;
    char object;
    scanf("%d",&t);
    while(t--) {
        llx=lly=1001;
        urx=ury=-1001;
        scanf("%d",&n);
        fflush(stdin);
        for(i=0;i<n;i++) {
            if((object=getchar())=='\n') object=getchar();
            switch(object) {
                case 'p': scanf("%d%d",&x1,&y1);
                          set_rect_bound(x1,y1,x1,y1); break;
                case 'l': scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
                          set_rect_bound(minimum(x1,x2),minimum(y1,y2),maximum(x1,x2),maximum(y1,y2));
                          break;
                case 'c': scanf("%d%d%d",&x1,&y1,&r);
                          set_rect_bound(x1-r,y1-r,x1+r,y1+r);
                          break;                
            }
        }
        printf("%d %d %d %d\n",llx,lly,urx,ury);
        scanf("%c",&object);//read new line
    }
}
