//HOTELS - Hotels Along the Croatian Coast
#include<stdio.h>
#include<stdlib.h>
int main(void) {
    int N,M,*hotel,Current_max=0,max=0,i,j=0;
    scanf("%d%d",&N,&M);
    hotel=(int *)malloc(N*sizeof(int));
    for(i=0;i<N;i++) {
        scanf("%d",&hotel[i]);
        Current_max+=hotel[i];
        while(Current_max>M) Current_max-=hotel[j++];
        if(Current_max>max) max=Current_max;
    }
    printf("%d",max);
}
