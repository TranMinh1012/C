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
void XuatMaTran(int a[][max], int m, int n)
{
	int i, j;
	for( i = 0; i < m; i++){
		for( j = 0; j < n; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
void DoiChoHaiCot( int a[][max], int m, int n, int c1, int c2)
{
	int i;
	if( (c1 >= 1 && c1 <= n) && ( c2 >= 1 && c2 <= n) ){
	for( i = 0; i < m; i++){
		int temp = a[i][c1-1];
		a[i][c1-1] = a[i][c2-1];
		a[i][c2-1] = temp;
	}
}
}
int main(){
	int a[max][max];
	int m, n, c1, c2;
	scanf("%d%d", &m, &n);
	NhapMaTran(a, m, n);
	scanf("%d%d", &c1, &c2);
	DoiChoHaiCot(a, m, n, c1, c2);
	XuatMaTran(a, m, n);
	return 0;
}
