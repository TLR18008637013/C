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