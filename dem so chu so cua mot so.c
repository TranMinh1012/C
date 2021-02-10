#include<stdio.h>

int main(){
    unsigned long long n;
	int i;
	int j = 0;
	scanf("%d", &n);
	while( n > 0){
		i = n % 10;
		++j;
		n /= 10;
	}
	printf("%d", j);
	return 0;
}
