#include<stdio.h>
int main(){
    int arr[10];
    int size, i ,j,temp,pos,k;
printf("Enter the size of your Array\n");
scanf("%d",&size);
printf("Enter the values in Array \n ");
for(i = 0;i < size; i++){
printf("%d Element:",i+1);
scanf("%d",&arr[i]);
printf("\n");
}
// Kth  Smallest Value
printf("Enter the postion  b/w the size of Array ");
scanf("%d",&pos);
/*----------------------------------------------*/
// Logic
// Remove duplicate values + shifting acc. to duplicate value



 Again:for(i = 0;i < size-1; i++){
     j=i+1;
while(j < size){
if(arr[i]==arr[j]){
    // Shifting.....
    for(k = j; k < size; k++)
   arr[k] = arr[k+1];
    size--;
}  



if(arr[i]>arr[j]){
temp = arr[i];
arr[i] = arr[j];
arr[j] = temp;
}
j++;
}
}
// saari remove nhi ho rhi thi isiliye GOTO statement ka use kra h!!!
for(i = 0;i < size-1; i++){
     j=i+1;
while(j < size){
if(arr[i]==arr[j]){

    goto Again;
    
}  
j++;
}}

// soeted array
for(i = 0; i< size;i++)
printf("%d\t",arr[i]);
printf("\n");
 
  i=pos-1;
 // printing the value at  entered position
 printf("-------------------------------------\n");
 printf("The smallest value at %d position is %d",pos,arr[i]);
  printf("\n-------------------------------------\n");


/*----------------------------------------------*/




return 0;
}