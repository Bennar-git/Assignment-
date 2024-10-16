//A do while loop
/*
Benard kimani
CT101/G/23293/24
*/
#include <stdio.h>
int main()
 {
	int start , sum, stop ;
	
	printf("Enter where to start :");
	scanf("%d",&start);
	printf("Enter where to stop :");
	scanf("%d",&stop);
	
	do {
		printf("%d\n",start);
		start++;
		sum+=start;
		}
	while(start<=stop);
		printf("The sum is: %d\n",sum);
	return 0;
}
