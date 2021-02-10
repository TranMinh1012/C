#include<stdio.h>
#define MAX 100

void NhapMang( int a[], int n)
{
	int i;
	for( i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
}
void TimMin( int a[], int n)
{
	int i;
	int min1 = a[0];
	for( i = 0; i < n; i++){
		if ( a[i] < min1){
			min1 = a[i];
		}
	}
	printf("%d ", min1);
	int min2 = a[1];
	for ( i = 0; i < n; i++){
		if (( a[i] < min2) && ( a[i] > min1) ){
			min2 = a[i];
		}
	}
	printf("%d", min2);
}
int main(){
	int a[MAX];
	int n;
	scanf("%d", &n);
	NhapMang(a, n);
	TimMin(a, n);
	return 0;
}
