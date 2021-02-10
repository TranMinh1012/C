#include<stdio.h>

void nhapMang( int a[], int n)
{
	int i;
	for ( i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
}
int timMax(int a[], int n)
{
	int max = a[0];
	int i;
	for ( i = 0; i < n; i++){
		if ( a[i] > max){
			max = a[i];
		}
	}
	return max;
}
int timMin( int a[], int n)
{
	int min = a[0];
	int i;
	for ( i = 0; i < n; i++){
		if ( a[i] < min){
			min = a[i];
		}
	}
	return min;
}
int main(){
	int n;
	int a[100];
	scanf("%d", &n);
	nhapMang(a, n);
	printf("%d %d", timMax(a, n), timMin(a, n));
	return 0;
}
