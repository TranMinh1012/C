#include<stdio.h>
#define MAX 100

void NhapMaTran( int a[][MAX], int n)
{
	int i, j;
	for ( i = 0; i < n; i++){
		for ( j = 0; j < n; j++){
			scanf("%d", &a[i][j]);
		}
	}
}
int TongCot( int a[][MAX], int n, int j)
{
	int i;
	int sum = 0;
	for ( i = 0; i < n; i++){
		sum += a[i][j];
	}
	return sum;
}
void CotTongMax( int a[][MAX], int n)
{
	int i, j;
	int ind = 1;
	int max = TongCot(a, n, 0);
	for ( j = 1; j < n; j++){
		if ( max < TongCot(a, n, j) ){
			max = TongCot(a, n, j);
			ind = j + 1;
		}
	}
	printf("%d\n", ind);
	for(i = 0; i < n; i++){
		printf("%d ", a[i][ind-1]);
	}
}
int main(){
	int a[MAX][MAX];
	int n;
	scanf("%d", &n);
	NhapMaTran(a, n);
	CotTongMax(a, n);
	return 0;
}
