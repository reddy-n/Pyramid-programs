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
         while(c != (row-i))
         {
            printf("%c",space);
            c++;
         }
        for(j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
