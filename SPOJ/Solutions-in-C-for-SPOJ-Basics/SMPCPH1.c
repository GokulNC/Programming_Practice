// SMPCPH1 - Substitution cipher
#include<stdio.h>
#include<string.h>
int main() {
    int n,m,i,l,j;
    char str[100],S[26];;
    scanf("%d",&n);
    scanf("%s",S);
    scanf("%d",&m);
    getchar();
    while(m--) {
        gets(str);
        for(i=0,l=strlen(str);i<l;i++)
            for(j=0;j<n;j++) 
                if(str[i]==S[j]){
                    str[i]=S[(j+1)%n];
                    break;
                }
            printf("%s\n",str);
    }
}
