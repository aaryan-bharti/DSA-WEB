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
/*-----------------------------------*/
//LOGIC
printf("The  Positive elements are--> \n");
for(i=0;i<10;i++)
if(arr[i] >= 0)
printf("%d\n",arr[i]);

/*---------------------------------*/


return 0;
}
