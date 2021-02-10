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
void NhapMaTran( int a[][max], int n)
{
	int i, j;
	for( i = 0; i < n; i++){
		for( j = 0; j < n; j++){
			scanf("%d", &a[i][j]);
		}
	}
}
void DemSNT( int a[][max], int n)
{
	int b[max];
	int nb = 0;
	int i, j;
	int k = 0;
	for( i = 0; i < n; i++){
		if(SNT(a[i][i]) == 1){
			b[nb] = a[i][i];
			nb++;
		}
		if(SNT(a[i][n-i-1]) == 1){
			b[nb] = a[i][n-i-1];
			nb++;
		}
	}
	int c[max];
	for ( i = 0; i < nb; i++){
		c[i] = 1;
	}
	for ( i = 0; i < nb; i++){
		if( c[i] ){
			c[i] = 0;
			for( j = i+1; j < nb; j++){
				if( b[i] == b[j]){
					c[j] = 0;
				}
			}
			k++;
		}
	}
	printf("%d", k);
}
int main(){
	int a[max][max];
	int n;
	scanf("%d", &n);
	NhapMaTran(a, n);
	DemSNT(a, n);
	return 0;
}

