#include<stdio.h>

int KiemTraSoStrong( int n)
{
	int i, j;
	int sum = 0;
	int m;
	m = n;
	while( n > 0){
		int k = 1;
		i = n % 10;
		for( j = 1; j <= i; j++){
			k *= j;
		}
		sum += k;
		n /= 10;
	}
	if(sum == m){
		return 1;
	} else{
		return 0;
	}
}
int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	int i;
	int count = 0;
	if( a < b){
		for( i = a; i <= b; i++){
			if(KiemTraSoStrong(i) == 1){
				printf("%d ", i);
				count++;
			}
		}
	}
	if( a > b){
		for( i = b; i <= a; i++){
			if(KiemTraSoStrong(i) == 1){
				printf("%d ", i);
				count++;
			}
		}
	}
	if( count == 0){
		printf("0");
	}
	return 0;
}
