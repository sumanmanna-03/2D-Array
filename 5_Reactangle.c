// --------------TAKING INPUT FROM USER AND THEN SUM-------------------

#include<stdio.h>
int main()
{
  int r,c;
  printf("enter the number of rows and column:\n");
  scanf("%d %d",&r,&c);
  printf("Enter all the element:\n");
  int arr[r][c];



  //Taking input
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      scanf("%d",&arr[i][j]);
    }
  }
  printf("\n");

  // printing output
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      printf("%d  ",arr[i][j]);
    }
    printf("\n");
  }

  int l1,r1,l2,r2;
  printf("Enter the starting index:\n");
  scanf("%d %d",&l1,&r1);
  printf("Enter the ending index:\n");
  scanf("%d %d",&l2,&r2);
  
  int sum=0;
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      if(i>=l1 && i<=l2 && j>=r1 &&j<=r2){
        sum+=arr[i][j];
      }
    }
  }
  printf("Sum=%d",sum);


  return 0;
}



// ---------------DIRECT SUM-------------------


// #include<stdio.h>
// int main()
// {
//   int a[4][5]={1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,6,7,8,9,10};

//   for(int i=0;i<4;i++){
//     for(int j=0;j<5;j++){
//       printf("%d ",a[i][j]);
//     }
//     printf("\n");
//   }
//   int l1=0,r1=1;
//   int l2=2,r2=4;
//   int sum=0;
//   for(int i=0;i<4;i++){
//     for(int j=0;j<5;j++){
//       if(i>=l1 && i<=l2 && j>=r1 &&j<=r2){
//         sum+=a[i][j];
//       }
//     }
//   }
//   printf("Sum=%d",sum);

//   return 0;
// }