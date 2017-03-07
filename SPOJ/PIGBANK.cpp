// PIGBANK - Piggy-Bank
// http://www.spoj.com/problems/PIGBANK/

#include<iostream>
#include<stdlib.h>

using namespace std;
int minimumPositive(int a, int b) {
    if(a<0&&b<0) return 0;
    if(a<0) return b;
    else if(b<0) return a;
    else return a<b?a:b;
}

int minamt(int p[], int w[], int n, int t) {
    int dp[t+1];
    for(int i=0; i<t+1 ;++i) dp[i]=-1; //init
    dp[0]=0;

    for(int i=0; i<t+1; ++i) { //for each wt
        for(int j=0; j<n; ++j) {//for each coin
            if(i>=w[j] && (i==w[j] || dp[i-w[j]]!=-1)) { //if wt. of coin fits current wt.
                dp[i] = minimumPositive(dp[i], dp[i-w[j]]+p[j]);
            } //else break; //if i/p in ascending order of weight
        }
    }
    return dp[t];
}

int main() {
    int T, E, F, total_wt, N, X;
    int *p, *w;
    cin>>T;
    while(T--) {
        cin>>E>>F>>N;
        total_wt = F-E;
        p = (int *) malloc(sizeof(int)*N);
        w = (int *) malloc(sizeof(int)*N);
        for(int i=0; i<N; ++i) cin>>p[i]>>w[i];
        X = minamt(p, w, N, total_wt);
        if(X!=-1) cout<<"The minimum amount of money in the piggy-bank is "<<X<<".\n";
        else cout<<"This is impossible.\n";
        free(p);
        free(w);
    }
    return 0;
}
