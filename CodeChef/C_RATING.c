#include <stdio.h>

int main(void) {
	int t,x,y,needrate;
	scanf("%d",&t);
	for(int i=1; i<=t; i++){
	    scanf("%d %d\n",&x,&y);

	    needrate=(y-x);

	    if(needrate==0){
	        printf("0\n");
	    }
	    else if(needrate<8){
	        printf("1\n");
	    }
	    else{
	        if(needrate%8==0){
	            printf("%d\n",(needrate/8));
	        }
	        else if((needrate/8)>0){
	            printf("%d\n",((needrate/8)+1));
	        }
	    }

	}
	return 0;
}
