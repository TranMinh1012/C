#include<stdio.h>
#define MAX 100

void NhapMang( int a[], int n)
{
	int i;
	for( i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
}
void MaxVaViTri( int a[], int n)
{
	int i;
	int max;
	int tam;
	max = a[0];
	for( i = 0; i < n; i++){
		if( a[i] >= max){
			max = a[i];
			tam = i;
		}
	}
	printf("%d %d", max, tam+1);
}
void MinVaViTri( int a[], int n)
{
	int i;
	int min;
	int tam1;
	min = a[0];
	for( i = 0; i < n; i++){
		if( a[i] <= min){
			min = a[i];
			tam1 = i;
		}
	}
	printf("\n%d %d", min, tam1 + 1);
}
int main(){
	int a[MAX];
	int n;
	scanf("%d", &n);
	NhapMang(a, n);
	MaxVaViTri(a, n);
	MinVaViTri(a, n);
	return 0;
}
