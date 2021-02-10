#include<stdio.h>
#include<math.h>

int KiemTraSoDep( int n)
{
	int i = 2;
	int tam;
	tam = n;
	while ( n > 1){
		if( n%i == 0){
			if( tam % (i*i) == 0){
				return 1;
			}
		} esle {
			i++;
		}
	}
}
int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	for( i = a; i <= b; i++){
		if(KiemTraSoDep(i) == 1){
			printf("%d ", i);
		}
	}
}
