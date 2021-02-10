#include<stdio.h>
#define max 100

void NhapMang( int a[], int n)
{
	int i;
	for( i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
}
void DemVaLietKe( int a[], int n)
{
	int i, j;
	int count = 0;
	int dem = 0;
	for( i = 0; i < n; i++){
		for( j = 0; j < n; j++){
			if( a[i] == a[j] && i != j){
				count = 1;
			}
		}
		if( count == 0){
			dem++;
		}
		count = 0;
	}
	printf("%d\n", dem); 
	for( i = 0; i < n; i++){
		for( j = 0; j < n; j++){
			if( a[i] == a[j] && i != j){
				count = 1;
			}
		}
		if( count == 0){
			printf("%d ", a[i]);
		}
		count = 0;
	}
}
int main(){
	int a[max];
	int n;
	scanf("%d", &n);
	NhapMang(a, n);
	DemVaLietKe(a, n);
	return 0;
}
