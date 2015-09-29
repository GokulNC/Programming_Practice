#include<stdio.h>
#include<string.h>
char str[10];
FILE *f;
void combi(char prefix[],int k,int n)
{
    char i;
    for(i='a';;i++)
    {
        if(i=='z'+1) i='A';
        if(i=='Z'+1) i='0';
        if(i=='9'+1) break;
        prefix[n-k]=i;
        if(k-1==0)
        {
            prefix[n+1]='\0';
            fprintf(f,"%s\n",prefix);
        }
        else combi(prefix,k-1,n);
    }
}
void wrapper (int n)
{
    int k;
    for(k=1;k<=n;k++) combi(str,k,k);
}

int main() {
    f=fopen("E:\\ok.txt","w");
    int l;
    char c;
    printf("Enter maximum word length: ");
    scanf("%d",&l);
    wrapper(l);
    fclose(f);
  return 0;
}
