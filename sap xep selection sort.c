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
}
void SelectionSort( int a[], int n)
{
	int i, j;
	int min = 0;
	for ( i = 0; i < n-1; i++){
		min = i;
		for( j = i+1; j < n; j++){
			if( a[j] < a[min]){
				min = j;
			}
		}
		int temp = a[i];
			a[i] = a[min];
			a[min] = temp;
		XuatMang(a, n);
		printf("\n");
	}
}
int main(){
	int a[max];
	int n;
	scanf("%d", &n);
	NhapMang(a, n);
	SelectionSort(a, n);
	return 0;
}
