//c array
/*
Name:Benard kimani
Reg no:CT101/G/23293/24
*/

#include <stdio.h>
int main() {
	int i;//row
	int j;//column
	int marks [2][3]={ {65,95,40},{90,88,78} };
	for(i=0;i<2;i++){//row
		for(j=0; j<3; j++){//column
		printf("marks [%d][%d] = %d\n",i,j,marks[i][j]);
		}
		 }
	
	return 0;
	}
 
