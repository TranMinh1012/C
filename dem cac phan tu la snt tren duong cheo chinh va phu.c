#include<stdio.h>
#include<math.h>
#define max 100

int SNT( int n)
{
	int i;
	if( n < 2){
		return 0;
	} else {
		for ( i = 2; i <= sqrt(n); i++){
			if( n % i == 0){
				return 0;
			}
		}
	}
	return 1;
}
void NhapMaTran( int a[][max], int n)
{
	int i, j;
	for( i = 0; i < n; i++){
		for( j = 0; j < n; j++){
			scanf("%d", &a[i][j]);
		}
	}
}
void DemSNT( int a[][max], int n)
{
	int i;
	int count = 0;
	for( i = 0; i < n; i++){
		if(SNT(a[i][i]) == 1){
			count++;
		}
		if( SNT(a[i][n-i-1]) == 1){
			count++;
		}
	}
	if( n % 2 == 1 && SNT(a[n/2][n/2]) == 1){
		count--;
	}
	printf("%d", count);
}
int main(){
	int a[max][max];
	int n;
	scanf("%d", &n);
	NhapMaTran(a, n);
	DemSNT(a, n);
	return 0;
}
