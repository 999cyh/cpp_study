#include <stdio.h>
int main() {
	char str[] = "http://google.com";
	char str1[30] = "";
	char str2[10] = "";
	printf("http://google.com\n");
	printf("%s\n",str);
	printf("%s\n","http://google.com");
	puts(str);
	puts("http://google.com");
	printf("what string you like\n");
	scanf("%s",str1);
	(void)getchar();
	printf("str1:%s\n",str1);
	printf("put string\n");
	fgets(str2,10,stdin);
	printf("str2:%s\n",str2);
	return 0;
  
}             

