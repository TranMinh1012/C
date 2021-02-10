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
	printf("\n");
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
void SapXepTheoCot( int a[][max], int n)
{
	int i, j, k;
	for( j = 0; j < n; j++){
		for( i = 0; i <  n - 1; i++){
			for( k = i + 1; k < n; k++){
				if( a[i][j] < a[k][j]){
				int tam = a[i][j];
				a[i][j] = a[k][j];
				a[k][j] = tam;
			}
			}
		}
	}
}
int main(){
	int a[max][max];
	int n;
	scanf("%d", &n);
	NhapMaTran(a, n);
	SapXepTheoCot(a, n);
	XuatMaTran(a, n);
	return 0;
}
