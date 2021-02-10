#include<stdio.h>
#define max 100

void NhapMaTran( int a[][max], int m, int n)
{
	int i, j;
	for( i = 0; i < m; i++){
		for( j = 0; j < n; j++){
			scanf("%d",  &a[i][j]);
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
void TinhTich( int a[][max], int b[][max], int c[][max], int ca, int da, int cb)
{
	int i, j, k;
	for( i = 0; i < da; i++){
		for( j = 0; j < cb; j++){
			c[i][j] = 0;
			for(  k = 0; k < ca; k++){
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
}
int main(){
	int a[max][max], b[max][max], c[max][max];
	int n, m;
	scanf("%d%d", &n, &m);
	NhapMaTran(a, n, m);
	NhapMaTran(b, m, n);
	TinhTich(a, b, c, m, n, n);
	XuatMaTran(c, n, n);
	return 0;
}
