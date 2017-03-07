// SERI07 - Strange But Easy
// http://www.spoj.com/problems/SERI07/

#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

int isPrime(int n) {
    if(n==2) return 1;
    if(n%2==0) return 0;
    for(int i=3; i<=sqrt(n); i+=2) {
        if(n%i==0) return 0;
    }
    return 1;
}

int nextPrime(int k) {
    ++k;
    if(k==2) return k;
    if(k%2==0) ++k;
    while(!isPrime(k)) {
        k+=2;
    }
    return k;
}

void printSeq(int n) {
    int a, b, c=1;

    while(n--) {
        a = nextPrime(c);
        b = nextPrime(a);
        c = nextPrime(b);
        cout<<a*b+c;
        cout<<" ";
    }

}

int main() {
    int T, n;
    cin>>T;
    while(T--) {
       cin>>n;
       printSeq(n);
       cout<<'\n';
    }
    return 0;
}

