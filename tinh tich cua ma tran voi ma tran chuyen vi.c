#include<stdio.h>
#define max 100

void NhapMaTran(int a[][max], int n, int m)
{
	int i, j;
	for ( i = 0; i < n; i++){
		for( j = 0; j < m; j++){
			scanf("%d", &a[i][j]);
		}
	}
}
void XuatMaTran(int a[][max], int n, int m)
{
	int i, j;
	for ( i = 0; i < n; i++){
		for ( j = 0; j < m; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
void TinhTich(int a[][max], int n, int m)
{
	int b[max][max]; int c[max][max]; // b[max][max] la ma tran chuyen vi
	int i, j, k;
	for( i = 0; i < m; i++){
		for( j = 0; j < n; j++){
			b[i][j] = a[j][i];
		}
	}
	for( i = 0; i < n; i++){
		for( j = 0; j < n; j++){
			c[i][j] = 0;
			for( k = 0; k < m; k++){
				c[i][j] += a[i][k] * b[k][j]; 
			}
		}
	}
	XuatMaTran(c, n, n);
}
int main(){
	int a[max][max];
	int n, m;
	scanf("%d%d", &n, &m);
	NhapMaTran(a, n, m);
	TinhTich(a, n, m);
	return 0;
}
