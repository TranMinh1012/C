#include<stdio.h>
#define MAX 100

void NhapMang( int a[], int n)
{
	int i;
	for ( i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
}
void DemSoChan( int a[], int n)
{
	int i;
	int j = 0;
	for ( i = 0; i < n; i++){
		if ( a[i] % 2 == 0){
			j++;
		}
	}
	printf("%d ", j);
}
void DemSoLe( int a[], int n)
{
	int i;
	int k = 0;
	for ( i = 0; i < n; i++){
		if ( a[i] % 2 == 1){
			k++;
		}
	}
	printf("%d", k);
}
int main(){
	int a[MAX];
	int n;
	scanf("%d", &n);
	NhapMang(a, n);
	DemSoChan(a, n);
	DemSoLe(a, n);
	return 0;
	
}
