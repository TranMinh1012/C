#include<stdio.h>
int main(){
	int n, i;
	int count = 0;
	scanf("%d", &n);
	if ( n < 2 ){
		printf("0");
	} else {
	    for (i = 1; i <= n; ++i){
			if( n % i == 0){
				++count;
			}
		}

	if ( count == 2){
		printf("1");
	} else {
		printf("0");
	}
    }
	return 0;
}
