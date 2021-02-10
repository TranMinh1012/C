#include<stdio.h>
#include<math.h>

int main(){
	unsigned long n;
	scanf("%d", &n);
	int i = 0;
	int j = 0;
	if ( n >= pow(10, 9) ){
		printf("");
	} else {
		while ( n > 0 ){
			int k;
			k = n % 10;
			if ( k % 2 == 0){
				i++;
			}
			if (k % 2 == 1){
				j++;
			}
			n /= 10;
		}
		printf("%d %d", j, i);
	}
	return 0;
}
