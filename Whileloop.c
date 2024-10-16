//while loop
/*
Name:Benard kimani
Reg no:CT101/G/23293/24
*/

#include <stdio.h>

int main () {
	int start,stop,sum;
	
	printf("Enter where to start:");
	scanf("%d",&start);
	printf("Enter where to stop:");
	scanf("%d",&stop);
	
	while(start<=stop){
		printf("%d\n",start);
		start++;
		sum+=start;
		} 
		
		printf("The sum is:%d\n",sum);
		
		return 0;
		}
		
	
