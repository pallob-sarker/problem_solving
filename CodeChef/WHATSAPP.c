#include<stdio.h>
int main(){
    int t,x,y,z,unread,totalunread;
    scanf("%d",&t);

    for(int i=1; i<=t; i++){
        scanf("%d %d %d",&x,&y,&z);

        unread=(x-y);
        totalunread=(z*unread);

        printf("%d",totalunread);
    }
    return 0;
}
