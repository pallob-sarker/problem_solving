#include<stdio.h>

int main(int argc, char const *argv[])
{
    int t,A,B;
    scanf("%d", &t);
    while(t--){
        scanf("%d %d", &A, &B);
        if(A>0 && B>0){
            printf("Solution\n");
        }
        else if(A=0 || B>0){
            printf("Liquid\n");
        }
        else{
            printf("Solid\n");
        }
    }
    return 0;
}
