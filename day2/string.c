#include <stdio.h>
int main() {
	char a[5];
	char b[2][2];
	char str[30] = {0};
	char c;
	int i;
	for(c=65,i=0;c<91;c++,i++){
		str[i] = c;

	}
	str[i] = '\0';
	printf("%s",str);
        return 0;








}
