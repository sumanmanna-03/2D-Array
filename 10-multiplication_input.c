//------ multiplication taking input from user --------
#include<stdio.h>
int main()
{
  //------ 1st matrix---------
  int m;
  printf("Enter no of rows of 1st matrix : ");
  scanf("%d",&m);
  int n;
  printf("Enter no of columns of 1st matrix: ");
  scanf("%d",&n);

  int a[m][n];
  //input the 1st matrix
  printf("\nEnter the elements of 1st matrix : \n");
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      scanf("%d",&a[i][j]);
    }
  }


  // --------2nd matrix---------
  int p;
  printf("Enter no of rows of 2nd matrix : ");
  scanf("%d",&p);
  int q;
  printf("Enter no of columns of 2nd matrix: ");
  scanf("%d",&q);

  int b[p][q];
  //input the 2nd matrix
  printf("\nEnter the elements of 2nd matrix : \n");
  for(int i=0;i<p;i++){
    for(int j=0;j<q;j++){
      scanf("%d",&b[i][j]);
    }
  }



  if(n!=p){
    printf("The matrices cannot be multiply.");
  }
  else{
    //-------multiplication code------
    int res[m][q];
    for(int i=0;i<m;i++){
      for(int j=0;j<q;j++){
        res[i][j] = 0;
        // i th row of 1st matrix and j th col of 2nd matrix
        for(int k=0;k<n;k++){
          res[i][j]+=a[i][k] * b[k][j];
        }
      }
    }

    // print
    printf("The resultant matrix is : \n");
    for(int i=0;i<m;i++){
      for(int j=0;j<q;j++){
        printf("%d ",res[i][j]);
      }
      printf("\n");
    }
  }
  return 0;
}