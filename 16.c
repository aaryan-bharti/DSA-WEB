#include<stdio.h>

int main(){
    // Declarations
    int size,i,j ,count=0;
    int arr1[15],arr2[15];

 printf("Enter the size of your Array\n");
scanf("%d",&size);
printf("Enter the values in Array1 \n ");
for(i = 0;i < size; i++){
printf("%d Element:",i+1);
scanf("%d",&arr1[i]);
printf("\n");
}
// Taking elements in Array2
printf("Enter the values in Array1 \n ");
for(j = 0;j < size; j++)
{
printf("%d Element:",j+1);
scanf("%d",&arr2[j]);
printf("\n");

}

// Nested loop for checking the presence of elemnt
for(i = 0; i < size ; i++)
{
    for(j = 0; j< size; j++)
    {
if(arr1[i] == arr2[j]){
count++;
break;
}
}}
if(count != size )
printf("Both Arrays are not Same\n");
else
printf("Both arrays are same\n");
return 0;
}