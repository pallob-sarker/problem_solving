#include <stdio.h>

int main() {
	int x1,x2,x3,x4,count=0;
	scanf("%d %d %d %d",&x1,&x2,&x3,&x4);
	if(x1>=10){
	    count++;
	}
	if(x2>=10){
	   count++;
	}
	if(x3>=10){
	   count++;
	}
	if(x4>=10){
	   count++;
	}

	printf("%d",count);
	return 0;
}
