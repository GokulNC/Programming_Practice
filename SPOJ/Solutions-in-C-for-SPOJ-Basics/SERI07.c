// SERI07 - Strange But Easy
// http://www.spoj.com/problems/SERI07/
#include<stdio.h>

long int primes[30000], primes_found=0;

void calculateAllPrimes(int n) {
    long int i, j;
    primes[0] = 2;
    primes[1] = 3;
    primes_found = 2;
    for(i=4; primes_found<=n; i++) {
        for(j=0; j<primes_found; j++)
            if(i%primes[j] == 0) break;

        if(j == primes_found) primes[primes_found++] = i;
    }
}

int main() {

    int t, i, j, n[100], max;
    scanf("%d", &t);
    for(i=0; i<t; i++) {
        scanf("%d", &n[i]);
        if(n[i]>max) max = n[i];
    }

    calculateAllPrimes(3*max);

    for(i=0; i<t; i++) {
        for(j=0; j<n[i]; j++)
            printf("%d ", (primes[3*j]*primes[3*j+1])+primes[3*j+2]);
        printf("\n");
    }
	
	return 0;
}
