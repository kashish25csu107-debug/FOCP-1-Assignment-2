#include<stdio.h>
int main() {
    int marks[] ={85, 99, 72, 99 , 60, 99, 90 ,80};
    int n=sizeof(marks) /sizeof(marks[0]);
    int target =99;
    int count =0;
     printf("Students scoring %d are at indices : " ,target );
      //scan array to find occurences of 99 and print  indices 
      for(int i=0; i<n; i++){
        if(marks[i] ==target){
            printf("%d" , i);
            count++;
        }
      }
      printf("\n Total number of students who scored  %d:%d" ,target ,count);
      return 0;
}