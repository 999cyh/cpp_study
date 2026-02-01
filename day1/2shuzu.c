#include <stdio.h>
int main() {
	int i;
	int j;
	int a[5][3];
	float b[5] = {0.0};
	float c[3] = {0.0};
	for(i=0;i<5;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
                        b[i] +=  a[i][j];
			c[j] +=  a[i][j];
		}
	}
	for(i=0;i<5;i++){
		b[i] = b[i]/3;
		printf("b[%d]:%.2f\n",i,b[i]);
         
	}
	for(j=0;j<3;j++){
		c[j] = c[j]/5;
		printf("c[%d]:%.2f\n",j,c[j]);

	}
        return 0;
 








}
