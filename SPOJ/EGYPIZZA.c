//EGYPIZZA - Pizza
#include<stdio.h>
int main() {
    int n,ans=0,a1=0,a2=0,a3=0,n1,n2;
    scanf("%d",&n);
    while(n--) {
        scanf("%d/%d",&n1,&n2);
        if(n1==3) a3++;
        else if(n2==2) a2++;
        else a1++;
    }
    ans=a3+(a2-a2%2)/2;
    a1-=a3;
    if(a2%2) {
        ans++;
        a1-=2;
    }
    if(a1 > 0) {
        ans+=(a1-(a1%4))/4;
        if(a1%4>0) ans++;
    }
    printf("%d",ans+1);
    return 0;
}
