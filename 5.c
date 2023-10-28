Enter an array from user and print the number which is even ?
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
/*----------------------*/

//LOGIC
printf("The  Even elements are--> \n");
for(i=0;i<10;i++){
if(arr[i]%2 == 0)
printf("%d\n",arr[i]);
}
/*---------------------------------*/


return 0;
}

output:
You can only enter upto 10 values
Enter the elements in Array
1 Element:12
2 Element:24
3 Element:5
4 Element:4
5 Element:3
6 Element:657
7 Element:34
8 Element:33
9 Element:23
10 Element:43
The  Even elements are--> 
12
24
4
34
