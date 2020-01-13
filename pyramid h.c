#include <stdio.h>
int main()
{
    int row, i, j;
    printf("Enter the number of '*' to print diagonally (choose odd number): ");
    scanf("%d",&row);
   for(i = 1; i <= row; i++)
   {
       for(j = row; j >= 1; j--)
       {
           if (j == i || j == ((row+1) - i))
           {
               printf("* ");
           }
           else
            printf(" ");
       }
       printf("\n");
   }
    return 0;
}
