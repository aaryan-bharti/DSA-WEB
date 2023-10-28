#include<stdio.h>
int main(){
int i,j,k,size,count;
int arr[20];
printf("Enter the size of your Array\n");
scanf("%d",&size);
printf("Enter the values in Array1 \n ");
for(i = 0;i < size; i++){
printf("%d Element:",i+1);
scanf("%d",&arr[i]);
printf("\n");
}
// print Array
for(i = 0; i < size; i++)
printf("%d\t", arr[i]);
/*--------------------------------------------------*/
// Logic

   printf("\n------------------------------------\n");
    for( j = 1; j < size ; j++ ){
         

               
            
 if((arr[j-1] > arr[j]) && (arr[j] < arr[j+1]) )
 {
    count++;
    printf("\nLocal Minima : %d\t  Index:  %d  \n",arr[j],j);

 }
    }
     
if(count == 0){

printf("\nNo Local Minima\n");
}
/*--------------------------------------------------*/
return 0;
}