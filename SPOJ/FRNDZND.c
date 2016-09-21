// FRNDZND - Friend Zoned
// http://www.spoj.com/problems/FRNDZND/

#include<stdio.h>

int main() {
    long int n, q, l, r, i, values[100000];
    scanf("%d %d", &n, &q);
    for(i=0; i<n; i++) scanf("%d", &values[i]);
    for(i=0; i<q; i++) {
        scanf("%d %d", &l, &r);
        if(r-l+1 > 1) printf("0\n");
        else printf("%d\n", values[l-1]);
    }
}
// Logic: http://www.geeksforgeeks.org/given-a-set-find-xor-of-the-xors-of-all-subsets/
