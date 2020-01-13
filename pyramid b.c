#include <stdio.h>

int main()
{
    int i, j,rows;
    char space=' ';
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    for(i=0;i<rows;i++)
    {
        int c=0;
        for(j=0;j<rows-i;j++)
        {
            printf("* ");
        }
        printf("\n");
        while(c != i+1)
        {
            printf("%c ",space);
            c++;
        }
    }
    return 0;
}
