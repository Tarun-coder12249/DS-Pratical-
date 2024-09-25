#include<stdio.h>
#include<malloc.h>
int arr[8];
void inputData();
void printData();
int main(){
    inputData();
    printData();
}
void inputData()
{
    for(int i=1;i<=7;i++){
        printf("Enter the %dth element:",i);
        scanf("%d",&arr[i]);
    }
}
void printData()
{
    printf("Entered array is\n");
    for(int i =1;i<=7;i++){
        printf("%d\n",arr[i]);
    }
}