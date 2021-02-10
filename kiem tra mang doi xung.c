#include<stdio.h>
#define max 100

void NhapMang( int a[], int n)
{
	int i;
	for( i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
}
void KiemTraDoiXung( int a[], int n)
{
	int i, j;
	int count = 0;
	for( i = 0, j = n - 1; j > i; i++, j--){
		if(a[i] == a[j]){
			count = 1;
		} else {
			break;
		}
	}
	if( count == 1){
		printf("1");
	} else{
		printf("0");
	}
}
int main()
{
	int a[max];
	int n;
	scanf("%d", &n);
	NhapMang(a, n);
	KiemTraDoiXung(a, n);
	return 0;
}
