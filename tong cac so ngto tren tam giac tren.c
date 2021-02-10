#include<stdio.h>
#define max 100
#include<math.h>

void NhapMaTran( int a[][max], int n)
{
	int i, j;
	for( i = 0; i < n; i++){
		for( j = 0; j < n; j++){
			scanf("%d", &a[i][j]);
		}
	}
}
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
void TongTrenNT( int a[][max], int n)
{
	int i, j;
	int sum = 0;
	for( i = 0; i < n;  i++){
		for( j = i; j < n; j++){
			if( SNT(a[i][j]) == 1 ){
				sum += a[i][j];
			}
		}
	}
	printf("%d", sum);
}
int main(){
	int a[max][max];
	int n;
	scanf("%d", &n);
	NhapMaTran(a, n);
	TongTrenNT(a, n);
	return 0;
}
