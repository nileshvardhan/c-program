#include<stdio.h>
int main()
{
      int A[20][10],B[20][20],C[20][20],p,q,m,n,i,j;
      printf("Enter the order of matrix A(p*q)";
      scanf("%d%d",2p,2q);
      printf("Enter the order of matrix B(m*n)");
      scanf("%d%d",&m,&n);
      if(q!=m)
      {
              printf("matrix multiplication not possible");
              return 1;
              }
              
              printf("Enter matrix A");
              for (i=0;i<p;i++)
               {
                 for (j=0;j<q;j++)
                {
                   scanf("%d",A[i][j]);
                   }
                   }
                   printf("Matrix A:\n");
                   for (i=0;i<p;i++)
                   {
                       for (j=0;j<q;j++)
                       {
                         printf("%d\t",&A[i][j]);
                        }
                        printf("\n");
                        
                        printf("Enter matrix B"); 
                        for (i=0;i<m;j++)
                        {
                            for (j=0;j<n;j++)
                            {
                               scanf("%d\t",B[i][j]); 
                               }
                               printf("\n");
                               }
                               
                               
                               for (i=0;i<p;i++) 
                               {
                                   for (j=0;j<n;j++)
                                   {
                                     scanf("%d",&B[i][j]);
                                     }
                                }
                                
                                printf("Matrix B;\n");
                                for (i=0;i<m;i++)
                                {
                                   for (j=0;j<n;j++)
                                   {
                                        C[i][j]=0;
                                        for(k=0;k<q;k++)
                                        {
                                              C[i][j]+=A[i][k]*B[k][j];
                                              }
                                          }
                                       }
                                       
                                       printf("Matrix C:\n");
                                       for (i=0;            
                               
                               
                               
                               
                         
                        
                    
                    
                     
                        
                                         
                        
                        
                        
                        
                        
                        
                        
                 
                 
                 
               
         

