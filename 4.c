Enter an array from user and copy it into another array in reverse order?
#include<stdio.h>

int main(){   
int arr[10],arr2[10],i;

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
for(i=0;i<10;i++)
arr2[i] = arr[i];

/*---------------------------------*/

printf("The Array is given below\n");
for( i=9;i>=0;i--)
printf("%d\t",arr2[i]);
return 0;
}

output:
You can only enter upto 10 values
Enter the elements in Array
1 Element:34
2 Element:32
3 Element:5
4 Element:56
5 Element:32
6 Element:45
7 Element:13
8 Element:43
9 Element:7
10 Element:56
The Array is given below
56	7	43	13	45	32	56	5	32	34	
