#include<stdio.h>
#define max 100

int a[max][max];
int n, i ,j, tam, count;
int line, colum;

void MaTranXoanOcNguoc()
{
	tam = 0;
	count = n*n;
	line = n-1; colum = n-1;
	while( tam <= n/2){
		for( i = tam; i <= colum; i++){
			a[tam][i] = count--;
		}
		for( i = tam + 1; i <= line; i++){
			a[i][colum] = count--;
		}
		for( i = colum - 1; i >= tam; i--){
			a[line][i] = count--;
		}
		for( i = line - 1; i > tam; i--){
			a[i][tam] = count--;
		}
		tam++;
		line--;
		colum--;
	}
}
void XuatMaTran()
{
	for( i = 0; i < n; i++){
		for( j = 0; j < n; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
int main(){
	scanf("%d", &n);
	MaTranXoanOcNguoc();
	XuatMaTran();
	return 0;
}
