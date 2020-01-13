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
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void revertPyramid(int row)
{
     for(int i=0;i<=row;i++)
    {
        for(int j=0;j<row-i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
