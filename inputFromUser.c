#include<stdio.h>
int main()
{
  int r;//
  printf("Enter the number of rows:");
  scanf("%d",&r);
  int c;
  printf("Enter the number of columen:");
  scanf("%d",&c);

  //taking input from user
  int arr[r][c];
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      scanf("%d",&arr[i][j]);
    }
  }
  printf("\n");

  // printing array
  for(int i=0;i<=r-1;i++){
    for(int j=0;j<=c-1;j++){
      printf("%d ",arr[i][j]);
    }
    printf("\n");
  }
  return 0;
}