#include<stdio.h>
#define max 100
void NhapMaTran( int a[][max], int m, int n)
{
	int i, j;
	for( i = 0; i < m; i++){
		for( j = 0; j < n; j++){
			scanf("%d", &a[i][j]);
		}
	}
}
void XuatMaTran( int a[][max], int m, int n)
{
	int i, j;
	for( i = 0; i < m; i++){
		for( j = 0; j < n; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
void TinhHieu( int a[][max], int b[][max], int c[][max], int m, int n)
{
	int i, j;
	for( i = 0; i < m; i++){
		for( j = 0; j < n; j++){
			c[i][j] = a[i][j] - b[i][j];
		}
	}
}
int main()
{
	int a[max][max], b[max][max], c[max][max];
	int m, n;
	scanf("%d%d", &m, &n);
	NhapMaTran(a, m, n);
	NhapMaTran(b, m, n);
	TinhHieu(a, b, c, m, n);
	XuatMaTran(c, m, n);
	return 0;
}
