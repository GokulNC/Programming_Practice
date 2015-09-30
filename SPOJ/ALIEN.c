//ALIEN - Aliens at the train
#include<stdio.h>
#include<stdlib.h>
int main(void) {
    int T,n,allowed_max,*station,people,current_max,i,j,max_dist;
    scanf("%d",&T);
    while(T--) {
        scanf("%d%d",&n,&allowed_max);
        station=(int *)malloc(n*sizeof(int));
        current_max=j=max_dist=0;
        for(i=0;i<n;i++) {
            scanf("%d",&station[i]);
            current_max+=station[i];
            while(current_max>allowed_max) current_max-=station[j++];
            if(i-j+1==max_dist&&current_max<people) people=current_max;
            if(i-j+1>max_dist) {
                people=current_max;
                max_dist=i-j+1;
            }
        }
        printf("%d %d\n",people,max_dist);
        free(station);
    }
}
