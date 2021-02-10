#include<stdio.h>
#define MAX 100

void NhapMang( int a[], int n)
{
	int i;
	for ( i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
}
void XuatMang( int a[], int n)
{
	int i;
	for ( i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
}
void SapTang( int a[], int n)
{
	int i, j;                           
	for ( i = 0; i < n - 1; i++){
		for ( j = i + 1; j < n; j++){
			if ( a[i] > a[j]){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
				
			}
		}
	}
}
int main(){
	int a[MAX];
	int n;
	scanf("%d", &n);
	NhapMang(a, n);
	SapTang(a, n);
	XuatMang(a, n);
	return 0;
}


