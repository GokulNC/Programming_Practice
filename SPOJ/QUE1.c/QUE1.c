// QUE1 - Queue (Rookie)
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
struct person {
    int h,n;
}*p,temp;
int main(void) {
    int t,N,i,j,Q[1000];
    scanf("%d",&t);
    while(t--) {
        memset(Q,0,sizeof(Q));
        scanf("%d",&N);
        p=(struct person*)malloc(N*sizeof(struct person));
        for(i=0;i<N;i++) scanf("%d",&p[i].h);
        for(i=0;i<N;i++) {
            scanf("%d",&p[i].n);
            temp=p[i];
            for(j=i;temp.h<p[j-1].h;p[j]=p[j-1],j--); //Insertion Sort
            p[j]=temp;
        }
        //Now people (p) is sorted in ascending order based on height (As i increases, p[i].h increases)
        for(i=0;i<N;i++) {
            for(j=0;j<N;j++) {
                if(Q[j]==0) { // If no one is there at Q[j]
                    if(p[i].n==0) {  //If there are no tall persons ahead
                        Q[j]=p[i].h; // Place him at Q[j], since the Q[i] is shorter than the (taller) persons yet to be added 
                        break; //Go for next taller person
                    }
                    else p[i].n--; // Since there are taller persons than p[i], we leave a gap for them
                    //and since a gap is left, decrement the no. of taller persons ahead of p[i]
                }
            }
        }
        for(i=0;i<N;i++) printf("%d ",Q[i]);
        printf("\n");
        free(p);
    }
}
