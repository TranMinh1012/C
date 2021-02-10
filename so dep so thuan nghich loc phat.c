#include<stdio.h>

int SoThuanNghich( int n)
{
	int dao = 0;
	int m;
	m = n;
	while( m > 0){
		dao = dao * 10 + m % 10;
		m /= 10;
	}
	if( dao == n){
		return 1;
	}
}
int TongChuSo( int n)
{
	int sum = 0;
	while( n > 0){
		sum += n % 10;
		n /= 10;
	}
	if( sum % 10 == 8){
		return 1;
	}
}
int TonTaiSau( int n){
	int i;
	int count = 0;
	while( n > 0){
		i = n % 10;
		if( i == 6){
			count++;
		}
		n /= 10;
	}
	if( count != 0){
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
		if( SoThuanNghich(i) == 1 && TongChuSo(i) == 1 && TonTaiSau(i) == 1){
			printf("%d ", i);
		}
	}
	return 0;
}

