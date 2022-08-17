//递归函数
#include<stdio.h>
#include<stdlib.h>
int recur(int n)
{
  if(n==1)
    return 1;
  else 
    return n*recur(n-1);

}
int loop (int n)
{
  int m=1;
  for(int i=2;i<=n;i++)
     m*=i;
  return m;
}
int main (void)
{
  int a;
  printf("Please enter factorial value:\n");
  while((scanf("%d",&a))==1)
  {
      if(a>12)
    {
       printf("Please 13 value:\n");
    }  
    else if(a>0)
    {
      printf("recursion value is %d.\n",recur(a));
      printf("loop value is %d.\n",loop(a));
    }    


  }
  system("pause");
  return 0;
}
