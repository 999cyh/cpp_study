#include <stdio.h>
#include <string.h>
int main() {
	char str[100] = "";
	char str1[150] = "the URL is: ";
	printf("URL:\n");
	fgets(str,20,stdin);
	strcat(str,str1);
	puts(str);
	strcpy(str,str1);
	puts(str);
	printf("str1 VS str:%d\n",strcmp(str1,str));
	return 0;

       
}
