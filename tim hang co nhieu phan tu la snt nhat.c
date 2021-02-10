#include<stdio.h>
#include<math.h>
#define MAX 100

void NhapMaTran( int a[][MAX], int n)
{
	int i, j;
	for( i = 0; i < n; i++){
		for( j = 0; j < n; j++){
			scanf("%d", &a[i][j]);
		}
	}
}
int SNT( int n)
{
	int i;
	if ( n < 2){
		return 0;
	} else {
		for ( i = 2; i <= sqrt(n); i++){
			if( n % i == 0){
				return 0;
			}
		}
	}
	return 1;
}
int DemSNT( int a[][MAX], int n, int i){
	int j;
	int count = 0;
	for( j = 0; j < n; j++){
		if(SNT(a[i][j]) == 1){
			count++;
		}
	}
	return count;
}
void HangNhieuSNTNhat( int a[][MAX], int n){
	int i, j;
	int ind = 1;
	int max = DemSNT(a, n, 0);
	for( i = 0; i < n; i++){
		if( max < DemSNT(a, n, i) ){
			max = DemSNT(a, n, i);
			ind = i+1;
		}
	}
	printf("%d\n", ind);
	for( j = 0; j < n; j++){
		if(SNT(a[ind-1][j]) == 1){
			printf("%d ", a[ind-1][j]);
		}
	}
	
	
}
int main(){
	int a[MAX][MAX];
	int n;
	scanf("%d", &n);
	NhapMaTran(a, n);
	HangNhieuSNTNhat(a, n);
	return 0;
}
