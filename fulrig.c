// Online C compiler to run C program online
#include <stdio.h>
void main()
{
    int row,col;
    printf("enter n of rows and columns");
    scanf("%d%d",&row,&col);
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            if(i==row||j==1||i==j||i>j)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}