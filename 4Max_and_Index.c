#include<stdio.h>
int main()
{
  int a[3][3]={{1,2,3},{10,8,900},{6,400,5}};
  int max=a[0][0];
  int idx1=-1;//declaring index with -1
  int idx2=-1;
  for(int i=0;i<=2;i++){
    for(int j=0;j<=2;j++){
      if(max<a[i][j]){
        max=a[i][j];
        idx1=i;
        idx2=j;
      }
    }
  }
  printf("%d is present in index (%d,%d)",max,idx1,idx2);
  return 0;
}