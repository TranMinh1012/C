#include<stdio.h>

int main(){
	int n;
	int i, j;
	scanf("%d", &n);
	j = n % 10;
	while ( n != 0){
		i = n % 10;
		n /= 10;
	}
	printf("%d %d", i, j);
	return 0;
}
