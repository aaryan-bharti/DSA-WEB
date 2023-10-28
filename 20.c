//                 TRAPPING RAINWATER PROBLEM
#include<stdio.h>
 int Water(int[],int);
 int Water( int arr[],int size ){
    int left[size],right[size]; 
   left[0] = arr[0];
   right[size-1] = arr[size -1];
 int i,temp,sum = 0;
  // Step 1:- From Left --  Taking MAX value
for(i = 1;i <size;i++){
if( left[i-1] > arr[i])
left[i] = left[i-1];
else // why else keyword is necessary in this statement.
left[i] = arr[i];
 
}
//  Step 2 :- From Right --  Taking MAX value
for(i = size-2; i>=0;i--){
if(right[i+1] > arr[i])
right[i] = right[i+1];
else
right[i] =  arr[i];
}
 /*---------Printing both Arrays----------
for( i = 0 ; i< size;i++)
printf("%d\t",left[i]);
printf("\n");
for( i = 0 ; i< size;i++)
printf("%d\t",right[i]);  */

// Step 3:- Total No. of blocks = Taking Smaller value -  Smaller value from the Array(blocks)
for(i = 0; i< size; i++){
if( left[i] <=  right[i])
 sum += left[i]- arr[i];
 else
 sum += right[i] - arr[i];
}
 return sum;
 }

int main(){
    int arr[20]; 
    int i,size,sum;
    printf("Enter the size of your Array\t");
    scanf("%d",&size);
printf("Enter the Array:\n");
for( i = 0;i< size;i++){
printf("%d Element :",i+1);
scanf("%d",&arr[i]);
printf("\n");
}
printf("------------------------------------------------------");
printf("\nThe total number of area covered by water is %d unit\n",  sum = Water(arr,size));
    return 0;
    
     
}