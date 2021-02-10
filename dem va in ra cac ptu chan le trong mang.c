#include<stdio.h>
#define MAX 100

void NhapMang( int a[], int n)
{
	int i;
	for ( i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
}
void SoLe( int a[], int n)
{
	int i;
	int k = 0;
	for ( i = 0; i < n; i++){
		if ( a[i] % 2 == 1){
			k++;
		}
	}
	printf("%d ", k);
	for ( i = 0; i < n; i++){
		if ( a[i] % 2 == 1){
			printf("%d ", a[i]);
		}
}
}
void SoChan( int a[], int n)
{
	int i;
	int j = 0;
	printf("\n");
	for ( i = 0; i < n; i++ ){
		if ( a[i] % 2 == 0){
			j++;
		}
	}
	printf("%d ", j);
	for ( i = 0; i < n; i++){
		if( a[i] % 2 == 0){
			printf("%d ", a[i]);
		}
	}
}
int main(){
	int a[MAX];
	int n;
	scanf("%d", &n);
	NhapMang(a, n);
	SoLe(a, n);
	SoChan(a, n);
	return 0;
	
}



