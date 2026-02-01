#include <stdio.h>
int main() {
	int num[10] = {0,1,10,11,15,20,29,50,80,99};
	int left = 0;
	int right = 9;
	int mid;
	int j;
	int isFound = 0;
	printf("what is you find");
	scanf("%d",&j);
	while(left <= right) {
		mid = (left + right)/2;
		if(num[mid] == j) {
			printf("IN Is num[%d]",mid);
			isFound = 1;
			break;
		}
		else if(num[mid] > j) {
			right = mid-1;
			continue;
		}
		else {
			left = mid+1;
		}


	}
        if(isFound == 0) printf("Not in\n");
        return 0;
         







}
