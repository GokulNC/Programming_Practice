// GAMES - HOW MANY GAMES
#include<stdio.h>
int GCD(long int a, long int b) {
    return b==0?a:GCD(b,a%b);
}
int main() {
    int t,flag,i;
    long int fraction,whole;
    char n[35];
    scanf("%d",&t);
    while(t--) {
        scanf("%s",n);
        for(i=whole=flag=0,fraction=1;n[i]!='\0';++i) {
            if(n[i]!='.'){
                whole=(whole*10)+(n[i]-'0')%10;
                if(flag) fraction*=10;
            }
            else flag=1;
        }
        printf("%d\n",fraction/GCD(whole,fraction));
        //Actually, we multiply given number(n) by fraction=10^(no_of_fractional_digits) to get a gross whole number (whole) without any fraction
        //Next, GCD() tells the maximum number that divides 'whole' & 'fraction' without resulting in decimal point
        //So, dividing 'fraction' by the GCD gives us the minimum number which has to be multiplied to n to get a minimum whole number
    }
}
