#include <stdio.h>
int main() {
   int sum = 0;
   int i = 0;
   while(i<100){
       i+=1;
       sum += i;
   }
   printf("sum:%d",sum);//1+...+100
   printf("\n***********\n");
   int secret = 32;
   int guess;
   printf("1~100 guess\n");
   scanf("%d",&guess);
   while(guess != secret) {
       printf("NO\n");
       if (guess > secret){
           printf(">\n");
       }
       else printf("<\n");
       scanf("%d",&guess);
   }
   printf("YES!\n"); 




}
