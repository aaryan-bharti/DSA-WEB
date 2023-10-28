#include<stdio.h>
int main(){   
    //Declaration
int size,i,sum = 0 ,rem ,count=0;
int arr[20],temp[20];

printf("Enter the size of Array\n");
scanf("%d",&size);

for(i=0;i<size;i++)
{
printf("%d Element:",i+1);
scanf("%d",&arr[i]);

printf("\n");
}
for(i=0;i<size;i++)
temp[i] = arr[i];

printf("The Pallindrone numbers are\n");
/*------------------------------------*/
           //Logic
 for(i = 0; i < size; i++){

while(arr[i] > 0){   // 121    12   1
 rem = arr[i] % 10; // 1  2    1
 sum = (sum * 10) + rem;// (0*10) + 1--> 1   (1 *10) + 2--> 12  (12*10)+ 1--> 121
 arr[i] /= 10;// 121/10 --> 12    12/10--> 1    1/10-->0
}
//printf("Sum = %d\t Temp[] =%d\n",sum,temp[i]);
if( sum == temp[i])
{
    count++;
printf(" %d\n",temp[i]);

}
// bcoz sum,rem m pehle se hi  kuch value store hogi
// after performing operation on Ist element   bs isliye...  
sum=0,rem=0;
}

/*------------------------------------*/
if(count == 0)
printf("There is no pallindrome in array\n");


return 0;
 }
