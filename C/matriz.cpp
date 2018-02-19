#include <stdio.h>

int main(){
	
	double balance[5] = {2,1,2,5,25};
	int matriz[3][4] = {
		{4,2,3,4},
		{5,24,34,24},
		{46,27,36,47}
	};
	
	
	
	int i,j;
	
	for(i=0; i<3; i++){
		for(j=0; j<4; j++){
			printf("[%d]",matriz[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
