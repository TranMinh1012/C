#include<stdio.h>
#define max 100

void NhapMang( int a[], int n)
{
	int i;
	for( i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	printf("\n");
}
void XuatMang( int a[], int n)
{
	int i;
	for( i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
}
void BubbleSort( int a[], int n)
{
	int i, j;
	int k = 1;
	for( i = 0; i < n - 1; i++){
		for( j = 0; j < n - 1; j++){
			if( a[j] > a[j + 1]){
				int tam = a[j + 1];
				a[j + 1] = a[j];
				a[j] = tam;
				k = 0;
			}
		}
		if( k == 1){
			break;
		}
		XuatMang(a, n);
		printf("\n");
		k = 1;
	}
		
}
int main()
{
	int a[max];
	int n;
	scanf("%d", &n);
	NhapMang(a, n);
	BubbleSort(a, n);
	return 0;
}
