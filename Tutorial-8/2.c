#include <stdio.h>
#define MAX 10
int main()
{   int a[MAX][MAX],b[MAX][MAX],c[MAX][MAX];
    int i,j,k,rowA,colA,rowB,colB,row,col;
    printf("\n Enter number of rows in MatrixA: ");
    scanf("%d",&rowA);
    printf("\n Enter number of columns in MatrixA: ");
    scanf("%d",&colA);
    printf("\n Enter number of rows in MatrixB: ");
    scanf("%d",&rowB);
    printf("\n Enter number of columns in MatrixB: ");
    scanf("%d",&colB);
    if(rowA==colB && rowB==colA)
    {
         printf("Enter elements of matrixA: \n");
    for(i=0;i<rowA;i++)
        for(j=0;j<colA;j++)
            scanf("%d",&a[i][j]);
            
    printf("Enter elements of matrixB: \n");
    for(i=0;i<rowB;i++)
        for(j=0;j<colB;j++)
            scanf("%d",&b[i][j]);
            
    for(i=0;i<row;i++)
        for(j=0;j<col;j++)
        { 
            c[i][j]=0;
            for(k=0;k<col;k++)
                c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
        }
    
    printf("\nProduct matrixC\n");
    for(i=0;i<row;i++)
    {     
        for(j=0;j<col;j++)
            printf("%4d",c[i][j]);
        printf("\n");
    } } 
    else
    {
        printf("INVALID");
    }
    return 0;
}
