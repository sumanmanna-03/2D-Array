#include<stdio.h>
int main()
{
  int r;
  printf("Enter the number of rows:");
  scanf("%d",&r);

  int c;
  printf("Enter the number of column:");
  scanf("%d",&c);

  printf("Enter all the elements:\n");
  int a[r][c];

  // taking input from user
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      scanf("%d",&a[i][j]);
    }
  }
  printf("\n");

  //printing number
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      printf("%d  ",a[i][j]);
    }
    printf("\n");
  }

  //sum
  int sum=0;
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      sum+=a[i][j];
    }
  }
  printf("Element of sum is:%d",sum);
  return 0;
}