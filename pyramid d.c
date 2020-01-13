#include <stdio.h>

int main()
{
    int i,j,row;
    char space=' ';
    printf("Enter the number of rows: ");
    scanf("%d",&row);
    for(i = 0; i < row; i++)
    {
        int c = 0;
        for(j = 0; j < row-i; j++)
        {
            printf("* ");
        }
        printf("\n");
         while(c != i+1)
         {
            printf("%c",space);
            c++;
         }
    }
    return 0;
}
