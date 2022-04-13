#include<stdio.h>

int main(int argc, char const *argv[])
{
    int t, m, h, BMI;
    scanf("%d", &t);
    for(int i=0; i<t; i++){
        scanf("%d %d", &m, &h);
        BMI= (m/(h*h));
        if(BMI <= 18){
            printf("1\n");
        }
        else if(19<= BMI && BMI<= 24){
            printf("2\n");
        }
        else if(25 <= BMI && BMI <= 29){
            printf("3\n");
        }
        else if(BMI >= 30){
            printf("4\n");
        }
    }
    return 0;
}
