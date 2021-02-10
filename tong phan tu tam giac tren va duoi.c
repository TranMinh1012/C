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
void TongTren( int a[][max], int n)
{
	int i, j;
	int sum = 0;
	for( i = 0; i < n;  i++){
		for( j = i + 1; j < n; j++){
			 sum += a[i][j];
		}
	}
	printf("%d ", sum);
}
void TongDuoi( int a[][max], int n)
{
	int i, j;
	int sum = 0;
	for( j = 0; j < n; j++){
		for( i = j + 1; i < n; i++){
			 sum += a[i][j];
		}
	}
	printf("%d", sum);
}
int main(){
	int a[max][max];
	int n;
	scanf("%d", &n);
	NhapMaTran(a, n);
	TongTren(a, n);
	TongDuoi(a, n);
	return 0;
}
