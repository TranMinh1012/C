#include<stdio.h>
#include<math.h>

int SoThuanNghich( int n)
{
	int dao = 0;
	int m;
	m = n;
	while( m > 0){
		dao = dao * 10 + m % 10;
		m /= 10;
	}
	if ( dao == n){
		return 1;
	} else {
		return 0;
	}
}
int SNT( int n)
{
	int i;
	if( n < 2 ){
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
int UocNguyenTo( int n)
{
	int count = 0;
	int i;
	for( i = 2; i < n; i++){
		if( SNT(i) == 1){
			if( n % i == 0){
				count++;
			}
		}
	}
	if( count >= 3){
		return 1;
	}
}
int max( int x, int y){
	return x < y ? y : x;
}
int min( int x, int y){
	return x < y ? x : y;
}
int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	int i;
	for( i = min(a, b); i <= max(a, b); i++){
		if( SoThuanNghich(i) == 1 && UocNguyenTo(i) == 1){
			printf("%d ", i);
		}
	}
	return 0;
}
