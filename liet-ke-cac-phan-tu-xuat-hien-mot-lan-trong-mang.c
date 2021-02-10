#include<stdio.h>
#define max 100

void NhapMang( int a[], int n)
{
	int i;
	for( i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
}
void LietKe( int a[], int n)
{
	int i, j;
	int count;
	for( i = 0; i < n; i++){
		count = 0;
		for( j = 0; j < n; j++){
			if( a[i] == a[j] && i != j){
				count = 1;
			}
		}
		if(count == 0){
			printf("%d ", a[i]);
		}
	}
	if( count != 0){
		printf("0");
	}
}
int main(){
	int a[max];
	int n;
	scanf("%d", &n);
	NhapMang(a, n);
	LietKe(a, n);
	return 0;
}

