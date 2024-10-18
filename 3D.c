//3D array
/*
Name:Benard kimani
Reg no:CT101/G/23293/24
*/

#include <stdio.h>
int main() {
	int i;
	int j;
	int k;
	int marks [2][2][3]={ { {37,49,93},{98,76,59} },    { {67,35,70}, {45,65,79} } };
	
	for(i=0;i<2;i++){//index of the matrix
		for(j=0; j<2; j++){//row
			for(k=0;k<3;k++){//column
		printf("marks [%d][%d][%d] = %d\n",i,j,k,marks[i][j][k]);
				}
				  } 
				    }
	
	return 0;
	}
	
 
