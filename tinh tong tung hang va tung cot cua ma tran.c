#include<stdio.h>
#define max 100

void NhapMaTran( int a[][max], int n)
{
	int i, j;
	for( i = 0; i < n; i++){
		for( j = 0; j < n; j++){
			scanf("%d", &a[i][j]);
		}
	}
}
void TongTungHang( int a[][max], int n)
{
	int i, j;
	int k = 0;
	for( i = 0; i < n; i++){
		for( j = 0; j < n; j++){
			k += a[i][j];
		}
		printf("%d ", k);
		k = 0;
	}
	printf("\n");

}
void TongTungCot( int a[][max], int n)
{
	int i, j;
	int k = 0;
	for( j = 0; j < n; j++){
		for( i = 0; i < n; i++){
			k += a[i][j];
		}
		printf("%d ", k);
		k = 0;
	}

}

int main(){
	int a[max][max];
	int n;
	scanf("%d", &n);
	NhapMaTran(a, n);
	TongTungHang(a, n);
	TongTungCot(a, n);
	return 0;
}
