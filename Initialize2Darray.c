#include<stdio.h>
int main()
{
  //type 1
  int arr[2][2]={{1,2},{3,4}}; 

  //type 2
  int a[][3]={{1,2,3},{4,5,6}};

  //type 3
  int b[2][2]={1,2,3,4};

  for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
      printf("%d  ",b[i][j]);
    }
    printf("\n");
  }
  return 0;
}