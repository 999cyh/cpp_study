#include <stdio.h>
int main() {
    int sum = 0;
    for(int i=0 ; i<=10 ; i++)
	    sum += i;
    printf("sum:%d\n",sum);
//1+.....+10
    printf("\n****\n");
    for(int i = 1;i<=9;i++){
        for(int j = 1;j<=i;j++){
           printf("%d * %d = %d\t",j,i,j*i);
	}
        printf("\n");
    }









}
