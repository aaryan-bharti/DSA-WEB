#include<stdio.h>

int main(){   
    //Declaration
int arr[10],i,j;

printf("You can only enter upto 10 values\n");
printf("Enter the elements in Array\n");
for(int i=0;i<=9;i++)
{
printf("%d Element:",i+1);
scanf("%d",&arr[i]);

printf("\n");
}
printf("Here are the Duplicate values-->\n");
/*------------------------------------*/
           //Logic
        for(i = 0; i <= 9;i++)
        {
            for(j = i+1 ;j <= 9; j++)
            {
                if(arr[i] == arr[j])
                printf("%d\n",arr[i]);
                
            }
            
        }   

/*------------------------------------*/



return 0;
}