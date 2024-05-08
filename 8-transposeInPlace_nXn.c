#include<stdio.h>
int main()
{
  int n;
  printf("Enter the number of rows/columns : ");
  scanf("%d",&n);
  printf("Enter all the element:\n");
  
  int arr[n][n]; // n*n total elements

  // ----Taking input----
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      scanf("%d",&arr[i][j]);
    }
  }
  printf("\n");

  //----- printing matrix ------
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      printf("%d  ",arr[i][j]);
    }
    printf("\n");
  }
  printf("\n");

  printf("After transposing matrix is:\n");

  //------transposing-1-------
  // in this swapping process you will get same output as the input one.

  // for(int i=0;i<n;i++){
  //   for(int j=0;j<n;j++){
  //     //swap arr[i][j] and arr[j][i]
  //     int temp=arr[i][j];
  //     arr[i][j] = arr[j][i];
  //     arr[j][i]=temp;
  //   }
  // }

  //----- transposing-2------
      // changing j=i > in column

  // for(int i=0;i<n;i++){
  //   for(int j=i;j<n;j++){
  //     //swap arr[i][j] and arr[j][i]
  //     int temp=arr[i][j];
  //     arr[i][j] = arr[j][i];
  //     arr[j][i]=temp;
  //   }
  // }

  //------transposing-3-------
     // changing (j<=i) > in column

  for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
      //swap arr[i][j] and arr[j][i]
      int temp=arr[i][j];
      arr[i][j] = arr[j][i];
      arr[j][i]=temp;
    }
  }


  for(int i=0;i<n;i++){
     for(int j=0;j<n;j++){
       printf("%d  ",arr[i][j]); 
  }
    printf("\n");
  }
  return 0;
}