#include<stdio.h>

int main()
{
    int t, a, b, c;
    scanf("%d", &t);
    for(int i=0; i<t; i++){
        scanf("%d %d %d", &a, &b, &c);
        if(a<b){
            if(a<c){
                printf("Draw\n");
            }
            else if(b<c){
                printf("Bob\n");
            }
            else{
                printf("Alice\n");
            }
        }
    return 0;
}