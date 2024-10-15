#include <stdio.h>
#include <stdlib.h>
int main(void){
/*    int a[5]={1,2,3,4,5};//一维数组 
    int b[50];
    int i=0;
    for(i=0;i<50;i++){
	b[i]=3*i+5;
    printf("b[%d]=%d\n",i,b[i]);
    }*/
/*    int c[5][6];//二维数组 
    int i,j;
	for(i=0;i<5;i++){
		for(j=0;j<6;j++){
			c[i][j]=2*i+3*j+5;
			printf("a[%d][%d]=%-3d",i,j,c[i][j]);
		}
		printf("\n");
	} */
    char a[40]={"I am a student "};
    char b[]="I am a student\0";
	puts(a);
	puts(b);
	return 0;
}
