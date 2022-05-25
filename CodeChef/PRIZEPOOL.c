#include <iostream>
using namespace std;

int main() {
	int t,x,y,total;
	scanf("%d",&t);
	for(int i=1; i<=t; i++){
	    scanf("%d %d\n",&x,&y);

	    total= ((10*x)+(90*y));

	    printf("%d\n",total);
	}
	return 0;
}
