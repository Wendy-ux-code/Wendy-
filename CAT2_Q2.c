//Wendygrace Wairimu//
//CT101/G/23798/24//


#include <stdio.h>

int main ( ) {
	
	int a,b;
	int scores [2][2] = { {65,92},{84,72} };
	
	for (a=0;a<2;a++) {
	    for (b=0;b<2;b++) {
	        printf("Scores[%d][%d] = %d \n", a,b, scores[a][b]);
	    }
	}
	
	 int x,y;
	 int score [2][2] ={ {35,70},{59,67} };
	 
	 for (x=0;x<2;x++) {
	     for (y=0;y<2;y++) {
	         printf("Score[%d][%d] = %d \n",x,y,score[x][y]);
	     }
	 }
	      
	
	return 0;
	
	
}