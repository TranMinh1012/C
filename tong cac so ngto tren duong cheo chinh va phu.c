#include<stdio.h> // nho bo phan tu bi lap lai
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
void TongNTDuongCheo( int a[][max], int n)
{
	int i;
	int k = 0;
	int count = 0;
	for( i = 0; i < n; i++){
		if( SNT(a[i][i]) == 1){
			k += a[i][i];
			count++;
		}
		if( SNT(a[i][n-i-1]) == 1){
			k += a[i][n-i-1];
			count++;
		}
	}
	if( n % 2 == 1 && SNT(a[n/2][n/2]) == 1){
		k -= a[n/2][n/2]; // tru di phan tu bi lap lai o giua ma tran
	}  
	if( count == 0){
		printf("0");
	} else {
		printf("%d", k);
	}
	printf("\n%d", count);
	
}
int main(){
	int a[max][max];
	int n;
	scanf("%d", &n);
	NhapMaTran(a, n);
	TongNTDuongCheo(a, n);
	return 0;
}
