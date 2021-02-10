#include<stdio.h>
#include<math.h>
#define max 100
int SNT( int n)
{
	int i;
	if( n < 2){
		return 0;
	} else {
		for( i = 2; i <= sqrt(n); i++){
			if( n % i == 0){
				return 0;
			}
		}
	}
	return 1;
}
void MaTranXoanOcSNT( int a[][max], int n)
{
	int temp = 0;
	int count = 2;
	int cot = n - 1; int dong = n - 1;
	while( temp <= n/2){
		int i;
		for( i = temp; i <= cot; i++ ){
			if ( SNT(count) == 1){
				a[temp][i] = count;
		} else {
			i = i - 1;
		}
		count++;
	}
		for( i = temp + 1; i <= dong; i++){
			if( SNT(count) == 1){
				a[i][cot] = count;
		} else {
			i = i - 1;
		}
		count++;
	}
		for( i = cot - 1; i >= temp; i--){
			if( SNT(count) == 1){
				a[dong][i] = count;
		} else {
			i = i + 1;
		}
		count++;
	}
		for( i = dong - 1; i > temp; i--){
			if( SNT(count) == 1){
				a[i][temp] = count;
		} else {
			i = i + 1;
		}
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
	MaTranXoanOcSNT(a, n);
	XuatMaTran(a, n);
	return 0;
}

