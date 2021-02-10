#include<stdio.h>

int KiemTraSHH( int n)
{
	int i;
	int sum = 0;
	for( i = 1; i < n; i++){
		if( n % i == 0){
			sum += i;
		}
	}
	if ( sum == n){
		return 1;
	} else {
		return 0;
	}
}
int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	int i;
	int dem = 0;
	for( i = a; i <= b; i++){
		if( KiemTraSHH(i) == 1){
			printf("%d ", i);
			dem ++;
		} 
	}
	if ( dem == 0){
		printf("0");
	}
	return 0;
}
