#include<stdio.h>
int main(){
//Declaration
int arr1[20],arr2[20],arr3[40];
int i,j,size1,size2,size3,temp;
// Taking elements in Array1
 printf("Enter the size of your Array\n");
scanf("%d",&size1);
printf("Enter the values in Array1 \n ");
for(i = 0;i < size1; i++){
printf("%d Element:",i+1);
scanf("%d",&arr1[i]);
printf("\n");
}
// Taking elements in Array2
printf("Enter the size of your Array2\n");
scanf("%d",&size2);
printf("Enter the values in Array2 \n ");
for(i = 0;i < size2; i++)
{
printf("%d Element:",i+1);
scanf("%d",&arr2[i]);
printf("\n");

}
/*//Sorting Both Arrays
for(i = 0; i < size1-1; i++){

    for( j = i+1 ; j < size1; j++){
if(arr1[i]>arr1[j]){
 temp = arr1[i];
 arr1[i] = arr1[j];
 arr1[j] = temp;
}
    }
}

for(i = 0; i < size2-1; i++){

    for( j = i+1 ; j < size2; j++){
if(arr2[i]>arr2[j]){
 temp = arr2[i];
 arr2[i] = arr2[j];
 arr2[j] = temp;
}
    }
}
*/

// Assigning the total size of both Arrays to Arrays3
 size3 = size1 + size2;
// Merging 
for( i = 0; i < size1 ; i++)
        arr3[i] = arr1[i];
for( i = 0; i < size2; i++)
arr3[size1++] = arr2[i];



printf("\nBefore Sorting\n");
printf("\n--------------------------------\n");
for(i =0 ; i < size3;i++)
printf("%d\t",arr3[i]);

// Sorting
for(i = 0 ;i < size3-1; i++){

    for(j = i + 1; j < size3; j++){
    if(arr3[i] > arr3[j])
    {
        temp = arr3[i];
        arr3[i] = arr3[j];
        arr3[j] = temp;
    }
}}
printf("\n--------------------------------\n");
printf("\nAfter Sorting\n");
printf("\n--------------------------------\n");
for(i =0 ; i < size3;i++)
printf("%d\t",arr3[i]);
printf("\n--------------------------------\n");

    return 0;
}