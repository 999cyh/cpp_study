#include <stdio.h>
int main() {
    printf("====break====\n");
    for(int i = 0;i<=10;i++){
       if(i==5) break;
       printf("%d",i);
    }
    printf("====continue====\n");
    for (int i = 0;i<=10;i++) {
        if(i%2 == 0)continue;
         printf("%d\n",i);
    }
    return 0;                                                                                                                                                                                                                                                                                                                                     






}
