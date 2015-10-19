// IITKWPCA - Niceness of the string
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main() {
    int T,i,j,k,l,count,flag;
    char s[10001],*words[10001],tmp[10001],dummy;
    scanf("%d",&T);
    while(T--) {
        dummy=getchar();//to flush new line chars
        scanf("%[^\n]",s);
        l=strlen(s);
        for(count=0,i=j=0;i<=l;++i) {
            if(s[i]!=' '&&s[i]!='\0') tmp[j++]=s[i];
            else if(j!=0){
                tmp[j]='\0';
                for(flag=0,k=0;k<count;k++)
                    if(strcmp(tmp,words[k])==0) {
                        flag=1;
                        break;
                    }
                if(flag==0){
                    words[count]=(char *)malloc((j+1)*sizeof(char));
                    strcpy(words[count],tmp);
                    ++count;
                }
                j=0;
            }
        }
        printf("%d\n",count);
    }
}
