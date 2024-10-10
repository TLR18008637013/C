#include <stdio.h>
#include <stdlib.h>
int compare(int a,int b){
    int c;
    if(a>b){
        c=a;
    }else{
        c=b;
    }
    return c;
}
int main(){
    int a;
    int b;
    int compare(int a,int b);
    printf("please write down the number of a:\n");
    scanf("%d",&a);
    printf("please write down the number of b:\n");
    scanf("%d",&b);
    int max;
    max=compare(a, b);
    printf("the bigger number is :%d",max);
    return 0;
}
int main (){
	int x,y;
	for (x=1;x<=9;x++){
		for(y=1;y<=9;y++){
			printf("%d*%d=%-3d",x,y,x*y);
		}printf("\n");
	}
	
	return 0;
} 
int main(int argc, char *argv[]) {
    intx,y;
    for (x=1; x<=9; x++) {
        for (y=x; y<=9; y++) {
            printf("%d*%d=%-3d ",x,y,x*y);
        }
        printf("\n");
    }
    return 0;
}
int main() {
    int x,y,z;
    for (x=1; x<=9; x++) {
        for (z=1; z<x; z++) {
        printf("        "); 
        }
        for (y=x; y<=9; y++) {
        printf("%d*%d=%-3d ",x,y,x*y);
        }
        printf("\n");
    }
    return 0;
}
int main(){
	int x,y,z;
	for(x=1;x<=9;x++){
		for(z=9;z>=x;z--){
		printf("       ");
		}
		for(y=1;y<=x;y++){
		printf("%d*%d=%-3d",x,y,x*y);
		}
		printf("\n");
	}
	return 0;
}