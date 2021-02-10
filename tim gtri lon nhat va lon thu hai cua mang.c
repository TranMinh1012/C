#include<stdio.h>
#define MAX 100

void NhapMang( int a[], int n)
{
	int i;
	for ( i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
}
void TimMaxHai( int a[], int n)
{
	int i;
	int max1 = a[0];
	for ( i = 0; i < n; i++){
		if ( a[i] > max1){
			max1 = a[i];
		}
	}
	printf("%d ", max1);
	int max2 = a[0];
	for ( i = 0; i < n; i++){
		if ( (a[i] > max2) && ( a[i] < max1) ){
			max2 = a[i];
		}
	}
	printf("%d", max2);
}
int main(){
	int a[MAX];
	int n;
	scanf("%d", &n);
	NhapMang(a, n);
	TimMaxHai(a, n);
	return 0;
}
