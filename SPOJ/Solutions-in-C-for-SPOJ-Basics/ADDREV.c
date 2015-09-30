//ADDREV - Adding Reversed Numbers
#include<stdio.h>
int reverse(int x) {
    int r=0;
    while(x!=0) {
        r=(r*10)+(x%10);
        x/=10;
    }
    return r;
}
int main(void) {
    int t,n,r,a,b,sum;
    scanf("%d",&t);
    while(t--) {
        scanf("%d%d",&a,&b);
        printf("%d\n",reverse(reverse(a)+reverse(b)));
    }
}
