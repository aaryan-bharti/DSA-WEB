#include<stdio.h>

int main(){   
    //Declaration
int size = 10,arr[size],i,j,k;

printf("You can only enter upto 10 values\n");
printf("Enter the elements in Array\n");
for(int i = 0;i < size; i++)
{
printf("%d Element:",i+1);
scanf("%d",&arr[i]);

printf("\n");
}

/*------------------------------------*/
           //Logic

          //  for  fisrt value 
        for(i = 0; i <size;i++)
        {
            // for comparing rest of the value with first value
            for(j = i+1 ;j < size; j++)
            {
                if(arr[i] == arr[j])
                {
                    // for decreasing the size as well as for shifting the 
                    //elements to left
                   for( k = j ; k < size-1; k++)
                   
                    arr[k] = arr[k+1];
                
                     size--;
                   

                }  
                
            }
           
        }   
        
        

         
/*------------------------------------*/
printf("The Array is-->\n");
for(int i=0;i<size;i++)
{
printf("%d\t",arr[i]);
}
return 0;

}