#include<stdio.h>
#define max 100

unsigned long long fibo( int n)
{
		if ( n == 0 || n == 1){
		return n;
	}
	return fibo( n - 1 ) + fibo( n - 2);
}
void MaTranXoanOcFibo( int a[][max], int n)
{
	int temp = 0;
	int count = 0;
	int cot = n - 1; int dong = n - 1;
	while( temp <= n/2){
		int i;
		for( i = temp; i <= cot; i++ ){
			a[temp][i] = fibo(count);
			count++;
	}
		for( i = temp + 1; i <= dong; i++){
			a[i][cot] = fibo(count);
			count++;
	}
		for( i = cot - 1; i >= temp; i--){
			a[dong][i] = fibo(count);
			count++;
	}
		for( i = dong - 1; i > temp; i--){
			a[i][temp] = fibo(count);
			count++;
	}
		temp++;
		dong--;
		cot--;
	} 
}
XuatMaTran(int a[][max], int n){
	int i, j;
	for( i = 0; i < n; i++){
		for( j = 0; j < n; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
int main(){
	int a[max][max];
	int n;
	scanf("%d", &n);
	MaTranXoanOcFibo(a, n);
	XuatMaTran(a, n);
	return 0;
}
