
#include<stdio.h>
#define max 100

int a[max];
int b[max];
int n;

void NhapMang()
{
	int i;
	for( i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for( i = 0; i < n; i++){
		b[i] = 1;
	}
}
void LietKeVaDem()
{
	int i, j;
	for(i = 0; i < n; i++){
		int count = 1;
		if( b[i] ){
			b[i] = 0;
			for( j = i + 1; j < n; j++){
				if( a[i] == a[j]){
					count++;
					b[j] = 0;
				}
			}
			printf("%d\t%d\n", a[i], count);
		}
		
	}
}
int main()
{
	scanf("%d", &n);
	NhapMang();
	LietKeVaDem();
	return 0;
}
