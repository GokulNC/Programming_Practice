#include <stdio.h>

int main(void) {
	char c[200];
	int n,i,j,l;
	scanf("%d",&n);
	for(i=1;i<=n;i++) {
		scanf("%s",c);
		l=strlen(c);
		for(j=0;j<l/2;j+=2) putchar(c[j]);
		printf("\n");
		
	}
	return 0;
}
