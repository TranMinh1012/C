#include<stdio.h>
#include<math.h>
int SoThuanNghich( int n)
{
	int m;
	m = n;
	int dao = 0;
	while( n != 0){
		dao = dao * 10 + n % 10;
		n /= 10;
	}
	if ( dao == m){
		return 1;
	}
}
int TongChuSo( int n)
{
	int i;
	int sum = 0;
	while ( n != 0){
		i = n % 10;
		sum += i;
		n /= 10;
	}
	if ( sum % 10 == 0){
		return 1;
	}
}
int main(){
	int n;
	scanf("%d", &n);
	int i;
	int j = 0;
	for( i = pow(10,n-1); i < pow(10,n); i++){
		if(SoThuanNghich(i)==1&&TongChuSo(i)==1){
			j++;
		}
	}
	printf("%d", j);
	return 0;
}
