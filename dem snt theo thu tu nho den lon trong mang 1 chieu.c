#include<stdio.h>
#include<math.h>
#define max 100

void NhapMang( int a[], int n)
{
	int i;
	for ( i = 0; i < n; i++){
		scanf("%d", &a[i]);
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
void DemSNT( int a[], int n)
{
	int b[max];
	int nb = 0;
	int i, j;
	for ( i = 0; i < n; i++){
		if(SNT(a[i]) == 1){
			b[nb] = a[i];
			nb++;
		}
	}
	for ( i = 0; i < nb - 1; i++){
		for( j = i+1; j < nb; j++){
			if( b[i] > b[j] ){
				int temp = b[i];
				b[i] = b[j];
				b[j] = temp;
			}
		}
	}
	int count;
	int c[max];
	for( i = 0; i < nb; i++){
		c[i] = 1;
	}
	for( i = 0; i < nb; i++){
		count = 1 ;
		if( c[i] ){
			c[i] = 0;
			for( j = i + 1; j < nb; j++){
				if ( b[i] == b[j] ){
					count++;
					c[j] = 0;
				}
			}
			printf("%d %d\n", b[i], count);
		}
	}
}
int main(){
	int a[max];
	int n;
	scanf("%d", &n);
	NhapMang(a, n);
	DemSNT(a, n);
	return 0;
}
