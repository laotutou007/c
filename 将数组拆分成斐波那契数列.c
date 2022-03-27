#include<stdio.h>
int max(int x,int y){
    return x > y ? x : y;
}
int main(void){
    int (*p)(int,int)= &max;
    int a,b,c,d;
    printf("type three numbers:");
    scanf("%d,%d,%d",&a,&b,&c);
    return 0;

}