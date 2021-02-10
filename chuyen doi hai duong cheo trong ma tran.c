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
void XuatMaTran( int a[][max], int n)
{
	int i, j;
	for( i = 0; i < n; i++){
		for( j = 0; j < n; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
void DoiHaiDuongCheo( int a[][max], int n)
{
	int i, j;
	for ( i = 0; i < n; i++){
		for ( j = 0; j < n; j++){
			if( j == i){
				int temp = a[i][j];
				a[i][j] = a[i][n-i-1];
				a[i][n-i-1] = temp;
			}
		}
	}
}
int main()
{
	int a[max][max];
	int n;
	scanf("%d", &n);
	NhapMaTran(a, n);
	DoiHaiDuongCheo(a, n);
	XuatMaTran(a, n);
	return 0;
}
