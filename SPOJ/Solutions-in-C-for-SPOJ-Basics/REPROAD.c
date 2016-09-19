//REPROAD - Repair road
//Problem: http://www.spoj.com/problems/REPROAD/

#include<stdio.h>

int main() {
    int t, ramps, money, i, count, maxlen, max;
    int state[10000], queue[10000], front, rear; //queue holds the maxvaule till a bump

    scanf("%d", &t);
    while(t--) {
        scanf("%d %d", &ramps, &money);
        for(count=0, front=0, rear =-1,  maxlen=0, max=0, i=0 ; i<ramps; ++i) {
                scanf("%d", &state[i]);
                ++maxlen;
                if(!state[i]) {
                    ++count;
                    if(count > money) {
                        if(money==0) maxlen=0;
                        if(rear>=front) {
                            maxlen -= queue[front++];
                            if(rear>=front) queue[front] -= queue[front-1];
                        }
                        --count;
                    }

                    queue[++rear] = maxlen;
                }
                if(maxlen>max) max = maxlen;
        }
        printf("%d\n", max);
    }

}
