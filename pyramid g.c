#include <stdio.h>
void pyramid(int row);
void revertPyramid(int row);

int main()
{
    int rows;
    printf("Enter the number of '*' required at the middle row: ");
    scanf("%d",&rows);
    pyramid(rows);
    revertPyramid(rows);
    return 0;
}

void pyramid(int row)
{
    char space=' ';
    for(int i = 0; i < row-1; i++)
    {
        int c = 0;
         while(c != (row-(i+1)))
         {
            printf("%c",space);
            c++;
         }
        for(int j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void revertPyramid(int row)
{
    char space=' ';
     for(int i = 0; i < row; i++)
    {
        int c = 0;
        for(int j = 0; j < row-i; j++)
        {
            printf("* ");
        }
        printf("\n");
         while(c!=i+1)
         {
            printf("%c",space);
            c++;
         }
    }
}
