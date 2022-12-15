#include<stdio.h>
int main()
{
    int a[5][5],b[5][5],c[5][5];
    int m,n,p,q,i,j,k;
    printf("ENTER THE SIZE OF FIRST MATRIX:\n");
    scanf("%d%d",&m,&n);
    printf("ENTER THE SIZE OF SECOND MATRIX:\n");
    scanf("%d%d",&p,&q);
    if(n==p)
    {
        printf("ENTER THE ELEMENTS OF 1st MATRIX:\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("ENTER THE ELEMENTS OF SECOND MATRIX:\n");
        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        for(i=0;i<m;i++)
   {
     for(j=0;j<q;j++)
     {
         c[i][j]=0;
         for(k=0;k<n;k++)
         {
             c[i][j]=c[i][j]+a[i][k]*b[k][j];
         }
     }
   }
   printf("THE PRODUCT OF MATRIX IS:\n");
   for(i=0;i<m;i++)
   {
     for(j=0;j<q;j++)
     {
         printf("%d\t",c[i][j]);
     }
     printf("\n");
   }
}
    else
        printf("multiplication not possible");
  return 0;
}
