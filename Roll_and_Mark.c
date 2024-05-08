#include<stdio.h>
int main()
{
  //no of student
  int num_student;
  printf("Enter the no of student:");
  scanf("%d",&num_student);
  //no of subject
  int num_subjects;
  printf("Enter the no of subjects:");
  scanf("%d",&num_subjects);

  int arr[num_student][num_subjects];


  //taking input from user
  for(int i=0;i<num_student;i++){
    for(int j=0;j<num_subjects;j++){
      scanf("%d",&arr[i][j]);
    }
  }
  printf("\n");

  //printing number
  for(int i=0;i<num_student;i++){
    for(int j=0;j<num_subjects;j++){
      printf("%d  ",arr[i][j]);
    }
    printf("\n");
  }
  return 0;
}