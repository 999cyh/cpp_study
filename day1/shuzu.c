#include <stdio.h>
int main() {
    int num[10];
    int i;
    int j;
    for(i=0;i<=9;i++){
        num[i] = i+1;
    }
    for(j=0;j<=9;j++){
        printf("num[%d]:%d\n",j,num[j]);
    }
    return 0;









}
