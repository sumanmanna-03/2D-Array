#include<stdio.h>
int main()
{
  int arr[3][3]={1,2,3,0,5,0,9,0,0};
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      printf("%d  ",arr[i][j]);
    }
    printf("\n");
  }

  int max_sum=0;
  int max_row=-1;\

  for(int i=0;i<3;i++){
    int sum=0;
    for(int j=0;j<3;j++){
      sum+=arr[i][j];
    }
    if(sum>max_sum){
      max_sum=sum;
      max_row=i;
    }
  }
  printf("Row with maximum sum is: %d and %d",max_row,max_sum);
  return 0;
}