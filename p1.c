#include<stdio.h>


int cube(int num)
{
	return num* num*num;
}
int main() 
{
   int num;
   printf("Enter a Number: ");
   scanf("%d", &num);
   
   printf("The cube of Number %d is %d", num, cube(num));
   	
}
