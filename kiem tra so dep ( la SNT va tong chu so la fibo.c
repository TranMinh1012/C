#include<stdio.h>
#include<math.h>

int SNT( int n)
{
	int i;
	if( n < 2){
		return 0;
	} else{
		for( i = 2; i <= sqrt(n); i++){
			if( n % i == 0){
				return 0;
			}
		}
	}
	return 1;
}
int KiemTrafibo( int n)
{
	int f0 = 0;
	int f1 = 1;
	int fn;
	while( fn < n){
		fn = f0 + f1;
		f0 = f1;
		f1 = fn;
	}
	if( fn == n){
		return 1;
	}
}
int TongChuSo( int n)
{
	int i;
	int sum = 0;
	while( n > 0){
		i = n % 10;
		sum += i;
		n /= 10;
	}
	if( KiemTrafibo(sum) == 1){
		return 1;
	}
}
int Max( int x, int y){
	return x < y ? y : x;
}
int Min( int x, int y){
	return x < y ? x : y;
}
int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	int i;
	for( i = Min(a, b); i <= Max(a, b); i++){
		if( SNT(i) == 1  && TongChuSo(i) == 1){
				printf("%d ", i);
			}
		}
	return 0;
}
