#include<stdio.h>
#include<string.h>

int main()
{
	char s[100];
	fgets(s, sizeof(s), stdin);
	char *s1;
	int i;
	for( i = 0; i < strlen(s); i++){
		if( s[i] == ' '){
			s1 = strdup(s);
			printf("%s\n", s1);
			free(s1);
		}
	}
	return 0;
}

