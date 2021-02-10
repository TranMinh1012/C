#include<stdio.h>
#define MAX 100

void NhapMaTran( int a[][MAX], int m, int n)
{
	int i, j;
	for( i = 0; i < m; i++){
		for( j = 0; j < n; j++){
			scanf("%d", &a[i][j]);
		}
	}
}
void XuatMaTran( int a[][MAX], int m, int n)
{
	int i, j;
	for( i = 0; i < m; i++){
		for( j = 0; j < n; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
int TongTrenHang( int a[][MAX], int m, int n, int i){
	int j;
	int sum = 0;
	for( j = 0; j < n; j++){
		sum += a[i][j];
	}
	return sum;
}
int TongTrenCot( int a[][MAX], int m, int n, int j){
	int i;
	int sum = 0;
	for( i = 0; i < n; i++){
		sum += a[i][j];
	}
	return sum;
}
void XoaHangVaCotCoTongMax( int a[][MAX], int m, int n){
	int i, j;
	int line = 0;
	int max = TongTrenHang(a, m, n, 0);
	for( i = 1; i < m; i++){
		if(max < TongTrenHang(a, m, n, i)){
			max = TongTrenHang(a, m ,n ,i);
			line = i;
		}
	}
	int colum = 0;
	int max1 = TongTrenCot(a, m, n, 0);
	for( j = 1; j < n; j++){
		if( max1 < TongTrenCot(a, m, n, j)){
			max1 = TongTrenCot(a, m, n, j);
			colum = j;
		}
	}
	for( i = line; i < m; i++){
		for( j = 0; j < n; j++){
			a[i][j] = a[i+1][j];
		}
	}
	for( i = 0; i < m+1; i++){
		for( j = colum; j < n; j++){
			a[i][j] = a[i][j+1];
		}
	}
}
int main(){
	int a[MAX][MAX];
	int m, n;
	scanf("%d%d", &m, &n);
	NhapMaTran(a, m, n);
	XoaHangVaCotCoTongMax(a, m ,n);
	XuatMaTran(a, m-1, n-1);
	return 0;	
}
