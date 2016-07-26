#include <stdio.h>
#include <string.h>

int main(){
	printf("Enter the string: ");
	char s[100];
	fgets(s, sizeof(s), stdin);
	int i;
	char temp[100];
	int count = 0;
	for(i=0; i<strlen(s)-1; i++){
		if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i] != 'o' && s[i]!='u'){
			temp[count]=s[i];
			count++;
		}
	}
	strcpy(s,temp);
	printf("\n%s\n", s);


	return 0;
}
