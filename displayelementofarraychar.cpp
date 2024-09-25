#include<stdio.h>
#include<malloc.h>
char arr[6];
void inputdata();
void printdata();
int main()
{
	inputdata();
	printdata();
}
void inputdata()
{
	int i;
	for(i=0;i<5;i++)
{
	printf("enter the %dth element : ",i);
	scanf("%s",&arr[i]);
}
}
void printdata()
{
	char i;
	printf(" elements of an array \n");
	for(i=0;i<5;i++){
		printf(" %c ",arr[i]);
}
}
