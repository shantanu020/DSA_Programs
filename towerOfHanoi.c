#include<stdio.h>
void towerOfHanoi(int n,char from_rod,char to_rod,char aux);
int main(){
    int n;
    char a,b,c;
    printf("Enter number of disk\n");
    scanf("%d",&n);
    towerOfHanoi(n,'a','c','b');
}
void towerOfHanoi(int n,char from_rod,char to_rod,char aux){
    if(n<=0){
        printf("Invalid number of disk\n");
    }
    else if(n==1){
        printf("Move the top disk from %c to %c\n",from_rod,to_rod);
    }
    else{
        towerOfHanoi(n-1,from_rod,aux,to_rod);
        towerOfHanoi(1,from_rod,to_rod,aux);
        towerOfHanoi(n-1,aux,to_rod,from_rod);
    }
}