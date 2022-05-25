#include <stdio.h>

int main(void) {
	int n,a,b,seeprob,submit;
    scanf("%d %d %d",&n,&a,&b);

    seeprob=(n-a);
    submit=(seeprob-b);

    printf("%d %d",seeprob, submit);

	return 0;
}
