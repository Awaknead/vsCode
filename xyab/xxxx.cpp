#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int a,b;    //头数，脚数
    int x,y;    //鸡，兔
    printf("Enter chicken and rabbit value: \n");
    printf("Next enter chicken and rabbit foot value:\n");
    scanf("%d%d",&a,&b);
    x=(4*a-b)/2;
    y=(b-2*a)/2;
    printf("chicken value is %d\n",x);
    printf("rabbit value is %d\n",y);
    system("pause");
    return 0;
}