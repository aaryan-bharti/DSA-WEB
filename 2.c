Enter an array from user and print the array in reverse order ?

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

printf("The Array in reverse order is given below\n");
for( i=9;i>=0;i--)
printf("%d\t",arr[i]);
return 0;
}


output:
You can only enter upto 10 values
Enter the elements in Array
1 Element:10
2 Element:23
3 Element:43
4 Element:56
5 Element:43
6 Element:23
7 Element:65
8 Element:324
9 Element:65
10 Element:34
The Array in reverse order is given below
34	65	324	65	23	43	56	43	23	10	