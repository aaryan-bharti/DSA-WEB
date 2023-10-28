Enter an array from user and display all the value ?

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

printf("The Array is given below\n");
for( i=0;i<=9;i++)
printf("%d\t",arr[i]);
return 0;
}


output :
You can only enter upto 10 values
Enter the elements in Array
1 Element:12
2 Element:45
3 Element:32
4 Element:567
5 Element:33
6 Element:22
7 Element:56
8 Element:32
9 Element:65
10 Element:23
The Array is given below
12	45	32	567	33	22	56	32	65	23	