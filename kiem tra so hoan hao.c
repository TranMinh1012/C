#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int i;
	int j = 0;
	for ( i = 1; i < n; i++){
		if( n % i == 0){
			j += i;
		}
	}
	if ( n == j){
		printf("1");
	} else {
		printf("0");
	}
	return 0;
}
