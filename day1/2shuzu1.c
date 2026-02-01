#include <stdio.h>
int main() {
	 int num[10] = {1,10,6,296,177,23,0,100,34,999};
	 int i;
	 int j;
	 scanf("%d",&i);
         for(j=0;j<10;j++){
		 if(num[j] == i){
			 printf("Yes,num[%d]is\n",j);
			 break;

		 }
		 else printf("NOT num[%d]\n",j);
                 
	 }
	 if(j==10) printf("NOT in\n");
         return 0;





      
}
