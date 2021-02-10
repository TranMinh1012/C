#include <stdio.h>
int main(){
	int n; 
	scanf("%d",&n);
	int i=0;
	int tam;
	tam = n;
	while(i < n){
		int j;
		for( j=0; j < (2*n) -1; j++){
			if(i > j){
				printf("%d", tam);
				tam--;
			}
			else if(j >= (2*n) - i - 2){
				printf("%d",tam);
				tam++; 
			}
			else printf("%d", tam);
		}
		i++;
		tam = n;
		printf("\n");
	} 
	i=n-1;
	while(i > 0){
		int j;
		for( j = 0; j < (2*n) -1; j++){
			if(j < i - 1){
				printf("%d", tam);
				tam--;
			}
			else if(j > (2*n) - i - 2){
				printf("%d",tam);
				tam++;
			}
			else printf("%d", tam);
		}
		i--;
		tam = n;
		printf("\n");
	} 
	return 0;
}
