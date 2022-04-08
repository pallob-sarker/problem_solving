#include<stdio.h>

int main()
{
    char child1, child2;
    scanf("%c %c", &child1, &child2);

    if(child1 == 'R' || child2 == 'R'){
        printf("R\n");
    }
    else if(child1 == 'G' && child2 == 'G'){
        printf("G\n");
    }
    else{
        printf("B\n");
    }
    return 0;
}
