#include<stdio.h>

int main(){   
int arr[10],i;

printf("You can only enter upto 10 values\n");
printf("Enter the elements in Array\n");
for( i=0;i<=9;i++)
{
printf("%d Element:",i+1);
scanf("%d",&arr[i]);

printf("\n");
}


printf("The  Square of all element in Array  is given below\n");
for( i=0;i<10;i++)
printf("%d\t",arr[i]*arr[i]);
return 0;
}
