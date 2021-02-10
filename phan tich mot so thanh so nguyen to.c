#include<stdio.h>

int main(){
	unsigned int n;
	unsigned int i = 2;
	int count = 0;
	scanf("%d", &n);
	while( n > 1){
		if ( n % i == 0){
			++count;
			if ( n == i ){
			printf("%d^%d", i, count);
		}
				
			n /= i;
		} else {
			if ( count > 0){
				printf("%d^%d ", i, count);
				count = 0;
			}
			++i;
		}
	}
	return 0;
}
