#include<stdio.h>

int main()
{
    int t, x, y, z, win, draw, lose;
    scanf("%d", &t);
    for(int i=0; i<t; i++){
        scanf("%d %d %d", &x, &y, &z);
        win = z*2;
        draw = z*1;
        lose = z*0;

        if((x+win)>=y || (x+draw)>=y || (x+lose)>=y){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}