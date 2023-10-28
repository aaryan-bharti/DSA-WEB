Enter an array from user and copy the array into second array?


#include<stdio.h>

int main(){   
int arr1[10],arr2[10],i;

printf("You can only enter upto 10 values\n");
printf("Enter the elements in Array\n");
for( i=0;i<=9;i++)
{
printf("%d Element:",i+1);
scanf("%d",&arr1[i]);


printf("\n");
}
/*-----------------------------------*/
//Logic
for(i=0;i<10;i++)
arr2[i] = arr1[i];
/*-----------------------------------*/

printf("The Array is given below\n");
for( i=0;i<=9;i++)
printf("%d\t",arr2[i]);
return 0;
}

output:
You can only enter upto 10 values
Enter the elements in Array
1 Element:10
2 Element:234
3 Element:43
4 Element:65
5 Element:32
6 Element:5
7 Element:764
8 Element:34
9 Element:65
10 Element:2
The Array is given below
10	234	43	65	32	5	764	34	65	2	