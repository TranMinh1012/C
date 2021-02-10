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
void MaTranChuyenVi( int a[][max], int n)
{
	int i, j;
	for( j = 0; j < n; j++){
		for( i = 0; i < n; i++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
int main(){
	int a[max][max];
	int n;
	scanf("%d", &n);
	NhapMaTran(a, n);
	MaTranChuyenVi(a, n);
	return 0;
}
