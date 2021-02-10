#include<stdio.h>
#include<math.h>
int main(){
	int n, i;
	int m = 2;
	scanf("%d", &n);
	while(1){
		int j = 1;
		for ( i = 2; i <= sqrt(m); ++i ){
			if ( m % i == 0){
				j = 0;
				break;
			}
		}
		if ( m >= n){
			break;
		}
		if (j == 1){
			printf("%d ", m);
		}
		++m;
		}	
	return 0;
}
