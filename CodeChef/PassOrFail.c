#include<stdio.h>

int main(int argc, char const *argv[])
{
    int t, n, x, p, pass;
    scanf("%d", &t);
    for(int i=0; i<t; i++){
        scanf("%d %d %d", &n, &x, &p);
        pass = x*3-(n-x);

        if(pass>=p){
            printf("PASS\n");
        }
        else{
            printf("FAIL\n");
        }
       // printf("\n");
    }
    return 0;
}