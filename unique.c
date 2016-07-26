#include <stdio.h>
#include <string.h>

int main(){
	char s[100];
	printf("Enter a string: ");
	fgets(s, sizeof(s), stdin);/*creates string*/
	int t=1;
	int i, j;
	for(i=0; i<strlen(s)-1; i++){
		for(j=i+1; j<strlen(s)-1; j++){
			if(s[i]==s[j]){
				t=0;
				break;
			}
		}
	}


	if(t==0)
		printf("Not all unique characters.\n");
	else printf("All unique characters.\n");

	return 0;
}

