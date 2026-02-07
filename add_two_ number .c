#include<stdio.h>
int main(){
int a,b,x;
  printf("enter first number");
    scanf("%d",&a);
  printf("enter secound number ");
  scanf("%d",&b);
  x=a+b;
  printf("X=%d",x);
  

return 0;
}
//output 
//enter the first number : 4
//enter the secound number : 4
//  x= 8


//lets make a secound method how to appcet input together at a time  //
// i'm  re-write the same code// 

#include<stdio.h>
int main(){
int a,b,x;
 printf("enter two number:");
  scanf("%d,%d",&a,&b);
  x=a+b;
  printf("X=%d",x);
  

return 0;
}
//output
// enter two number : 4,4
//x= 8
  
