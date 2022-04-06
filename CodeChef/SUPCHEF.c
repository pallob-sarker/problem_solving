#include<stdio.h>

int main()
{
    int t, m, n, k, time;
    scanf("%d", &t);
    for(int i=0; i<t; i++){
        scanf("%d %d %d", &m, &n, &k);
        
        time = n*k;

        if(time<m){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}