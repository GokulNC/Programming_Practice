//FLOG - Find Log
//Problem: http://www.spoj.com/problems/FLOG/
//Not Accepted :(

#include<stdio.h>
#include<math.h>

double fLog(long long int base, long long int num) {
    return log((double) num)/log((double) base);
}

int main() {
    long long int base, num;
    int t;
    double ans;
    scanf("%d", &t);
    while(t--) {
        scanf("%lld %lld", &base, &num);
        ans = fLog(base, num);
        if(ans > 0) printf("%.5lf\n", ans);
        else printf("Math Error!\n");
    }
    return 0;
}
