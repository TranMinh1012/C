#include<stdio.h>
#define max 100

void NhapMang( int a[], int n)
{
	int i;
	for( i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
}
void XuatMang( int a[], int n)
{
	int i;
	for( i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
}
void InsertionSort( int a[], int n)
{
	int i, j, k;
	for( i = 1; i < n; i++){
		k = a[i];
		j = i - 1;
		while( j >= 0 && a[j] > k){
			a[j+1] = a[j];
			j = j - 1;
		}
		a[j+1] = k;
		XuatMang(a, n);
	}
}
int main(){
	int a[max];
	int n;
	scanf("%d", &n);
	NhapMang(a, n);
	InsertionSort(a, n);
	return 0;
}
