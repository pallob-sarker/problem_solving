#include<stdio.h>

int main()
{
    int t, x, m, d, dot, sum;
    scanf("%d", &t);
    for(int i=0; i<t; i++){
        scanf("%d %d %d", &x, &m, &d);

        dot = x*m;
        sum = x+d;

        if(dot>=sum){
            printf("%d\n", sum);
        }
        else{
            printf("%d\n", dot);
        }
    }
    return 0;
}