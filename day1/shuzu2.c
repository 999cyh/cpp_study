#include <stdio.h>
int main() {
	int a[4] = {1,2,23,44};
        int b[4] = {234,44,2,43};
	int c[4] = {233,444,4442,7};
	printf("%-9d %-9d %-9d %-9d\n",a[0],a[1],a[2],a[3]);
        printf("%-9d %-9d %-9d %-9d\n",b[0],b[1],b[2],b[3]);
	printf("%-9d %-9d %-9d %-9d\n",c[0],c[1],c[2],c[3]);
        return 0;
}
