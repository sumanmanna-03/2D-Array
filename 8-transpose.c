// -------------transpose a matrix---------------

#include<stdio.h>
int main()
{
  int r,c;
  printf("enter the number of rows and column:\n");
  scanf("%d %d",&r,&c);
  printf("Enter all the element:\n");
  int arr[r][c];

    // ----Taking input----
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      scanf("%d",&arr[i][j]);
    }
  }
  printf("\n");

  // ----printing output----
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      printf("%d  ",arr[i][j]);
    }
    printf("\n");
  }

  //----priting transpose output----
  // interchanging r and c
  for(int i=0;i<c;i++){
    for(int j=0;j<r;j++){
      //interchging i and j
      printf("%d  ",arr[j][i]);
    }
    printf("\n");
  }
  return 0;
}