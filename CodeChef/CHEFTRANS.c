#include<stdio.h>

int main()
{
    int t, x,y,z;
    scanf("%d", &t);
    for(int i=0; i<t; i++){
        scanf("%d %d %d", &x, &y, &z);
        if((x+y)<z){
            printf("PLANEBUS\n");
        }
        else if((x+y)>z){
            printf("TRAIN\n");
        }
        else if((x+y)==z){
            printf("EQUAL\n");
        }
    }
    return 0;
}