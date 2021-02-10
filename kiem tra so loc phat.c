#include<stdio.h>

int main(){
	unsigned int n;
	scanf("%d", &n);
	int i;
	int j = 0;
	int k = 0;
	while( n > 0){
		i = n % 10;
		if ( ( i == 0) || ( i % 6 == 0) || ( i % 8 == 0) ){
			++j;
		}
		++k;
		n /= 10;
	} 
	if ( j == k){
		printf("1");
	} else {
		printf("0");
	} 
//	printf("%d", j);
	return 0; 
}
