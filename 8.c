#include<stdio.h>

int main(){   
  //Declaration  
int arr[10],i,temp;

printf("You can only enter upto 10 values\n");
printf("Enter the elements in Array\n");
for(int i=0;i<=9;i++)
{
printf("%d Element:",i+1);
scanf("%d",&arr[i]);


printf("\n");
}

//LOGIC
/*----------------------------------------*/
for( i=0;i<9;i++){
   
    if(arr[i]>arr[i+1]){
        temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
    
}
printf("The Maximum value in array--> %d\n",arr[9]);


for( i=0;i<9;i++){
   
    if(arr[i]<arr[i+1]){
        temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
      
}
printf("The Minimum value in array--> %d\n",arr[9]);
/*--------------------------------------*/

return 0;
}