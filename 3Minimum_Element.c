// minimum in a 2D array

#include<stdio.h>
int main()
{
  int a[3][3]={4,5,6,8,-22,3,9,7,78};
  int max=a[0][0];
  for(int i=0;i<=2;i++){
    for(int j=0;j<=2;j++){
      if(max>a[i][j]){
        max=a[i][j];
      }
    }
  }
  printf("%d",max);
  return 0;
}