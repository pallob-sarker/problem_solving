#include<stdio.h>

int main(int argc, char const *argv[])
{
    int t,a,b,sum;
    scanf("%d", &t);
    while(t--){
        scanf("%d %d", &a, &b);
        sum=(a+b);
        if(sum<3){
            printf("1\n");
        }
        else if(3<=sum && sum<=10){
            printf("2\n");
        }
        else if(11<=sum && sum<=60){
            printf("3\n");
        }
        else if(sum>60){
            printf("4\n");
        }
    }
    return 0;
}
