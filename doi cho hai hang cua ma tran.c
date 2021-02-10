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
void DoiChoHaiHang( int a[][max], int m, int n, int h1, int h2){
	int j;
	if( (h1 >= 1 && h1 <= m) && ( h2 >= 1 && h2 <= m)){
	for( j = 0; j < n; j++){
		int temp = a[h1-1][j];
		a[h1-1][j] = a[h2-1][j];
		a[h2-1][j] = temp;
	}
	}
}
int main(){
	int a[max][max];
	int m, n, h1, h2;
	scanf("%d%d", &m, &n);
	NhapMaTran(a, m ,n);
	scanf("%d%d", &h1, &h2);
	DoiChoHaiHang(a, m, n, h1, h2);
	XuatMaTran(a, m ,n);
	return 0;
}
