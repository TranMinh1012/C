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
int dem( int n){
	int count = 0;
	while( n > 0){
		n /= 10;
		count++;
	}
	return count;
}
int CheckTong( int n)
{
	int i = 0;
	while( n > 0){
		i += n % 10;
		n /= 10;
	}
	if( SNT(i) == 1){
		return 1;
	}
}
int CheckChuSo( int n)
{
	int i;
	int temp = 0;
	int m;
	m = n;
	while( n > 0){
		i = n % 10;
		if( SNT(i) == 1){
			temp++;
		}
		n /= 10;
	}
	if( temp == dem(m) ){
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
	int dem = 0;
	for( i = min(a, b); i <= max(a, b); i++){
		if( SNT(i) == 1 && CheckTong(i) == 1 && CheckChuSo(i) == 1){
			dem++;
		}
	}
	printf("%d", dem);
	return 0;
}
