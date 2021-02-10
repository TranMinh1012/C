#include<stdio.h>
#include<math.h>

int SNT( int n)
{
	int i;
	if( n < 2){
		return 0;
	} else {
		for( i = 2; i <= sqrt(n); i++){
			if( n % i == 0){
				return 0;
			}
		}
	}
	return 1;
}
int TongCacChuSo( int n){
	int sum = 0;
	int m;
	m = n;
	while( n > 0){
		sum += n % 10;
		n /= 10;
	}
	if( (SNT(m) == 1) && (sum % 5 == 0)){
		return 1;
	}
}
int main(){
	int n;
	scanf("%d", &n);
	int i;
	int count = 0;
	for( i = 1; i < n; i++){
		if(TongCacChuSo(i) == 1){
			printf("%d ", i);
			count++;
		}
	}
	printf("\n%d", count);
	return 0;
}
