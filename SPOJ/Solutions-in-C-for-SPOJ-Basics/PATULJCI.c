//PATULJCI - Snow White and the N dwarfs
//UNSOLVED (TLE)
#include<stdio.h>
#include<stdlib.h>
int main(void) {
    int M,a,b,N,C,*hats,i,*color_count,max,maxColor;
    scanf("%d%d",&N,&C);
    hats=(int *)malloc(N*sizeof(int));
    for(i=0;i<N;i++) scanf("%d",&hats[i]);
    scanf("%d",&M);
    while(M--) {
        scanf("%d%d",&a,&b);
        color_count=(int *)malloc(C*sizeof(int));
        for(max=0,i=a-1;i<b;i++) {
           if( max < (++color_count[hats[i]-1]) ) {
               maxColor=hats[i];
               max=color_count[hats[i]-1];
           }
           if(max>(b-a+1)/2) break;
        }
        if(max>(b-a+1)/2) printf("yes %d\n",maxColor);
        else printf("no\n");
        //free(color_count);
    }
}
