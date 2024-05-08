//---------------- Row with maximum 1's ------------------

#include<stdio.h>
int main()
{
  int arr[3][4]={1,0,1,1,0,0,0,1,1,1,1,1};
  for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
      printf("%d  ",arr[i][j]);
    }
    printf("\n");
  }
  
  int max_row=-1;
  int max_count=0;
  for(int i=0;i<3;i++){
    int count=0;
    for(int j=0;j<4;j++){
      if(arr[i][j]==1){
        count++;
      }
    }
    if(count>max_count){
      max_count=count;
      max_row=i;
    }
  }
  printf("Row with maximum sum is: %d \n",max_count);
  printf("Row with index is: %d ",max_row);
  return 0;
}