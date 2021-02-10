#include<stdio.h>
#define MAX 100

void NhapMang( int a[], int n)
{
	int i;
	for( i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
}
void DaoNguoc(int a[], int n)
{
	int i, j;
	for ( i = 0, j = n - 1; j > i; i++, j--){
		int tmp = a[i];
			a[i] = a[j];
			a[j] = tmp;		
	}
}
void InKetQua( int a[], int n)
{
	int i;
	for ( i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}
int main(){
	int a[MAX];
	int n;
	scanf("%d", &n);
	NhapMang(a, n);
	DaoNguoc(a, n);
	InKetQua(a, n);
	return 0;
}
