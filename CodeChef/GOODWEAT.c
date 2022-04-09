#include<stdio.h>

int main(){
    int t, day[7];
    scanf("%d", &t);
    while(t--){
        int i, count=0;
        for(i=0; i<7; i++){
           scanf("%d", &day[i]);
           count+=day[i];
        }
        if(count>3){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    return 0;
}
