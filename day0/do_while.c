#include <stdio.h>
#include <string.h>
int main() {
//secret checking
    char password[20];
    do {
        printf("123456\n");
	scanf("%s",password);
    } while(strcmp(password, "123456") != 0);
    printf("YES\n");

//checking meau
    int choice;
    do{
        printf("1-->one\n");
	printf("2-->two\n");
	printf("3-->exit\n");
	printf("4-->break\n");
	printf("1~4 choose\n");
	scanf("%d",&choice);
        switch(choice) {
            case 1:
		    printf("one\n");
		    break;
	    case 2:
		    printf("two\n");
		    break;
	    case 3:
		    printf("exit\n");
		    break;
	    case 4:
		    printf("OKOK\n");
		    break;
	 }
	}while(choice != 3);
       return 0;



}
