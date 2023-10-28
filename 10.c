#include<stdio.h>

int main(){   
int arr[10],i,sum = 0;

printf("You can only enter upto 10 values\n");
printf("Enter the elements in Array\n");
for( i=0;i<=9;i++)
{
printf("%d Element:",i+1);
scanf("%d",&arr[i]);

printf("\n");
}

/*------------------------------------*/
           //Logic

for( i=0;i<=9;i++)
sum += arr[i];
           

/*------------------------------------*/

printf("The  Sum of Array i %d\n",sum);

return 0;
}