#include <stdio.h>
 int main () {
     int a,b,c;
     int scores [2] [3] [2] ={ { {33,52},{45,98},{84,76} },{ {33,52},{45,98},{84,76} } };
     for (a=0;a<2;a++) {
         for (b=0;b<3;b++) {
             for (c=0;c<2;c++) {
                 printf("scores [%d][%d][%d]=%d \n",a,b,c, scores [a][b][c]);
             }
         }
     }
     int i,j,k;
     int score [2] [3] [2] = {{{10,12},{35,60},{80,42}},{{10,12},{35,60},{80,42}}};
     for (i=0;i<2;i++) {
         for (j=0;j<3;j++) {
             for (k=0;k<2;k++) {
                 printf("scores [%d][%d][%d]=%d\n",i,j,k, score [i][j][k]);
             }
         }
     }
   return 0;

}