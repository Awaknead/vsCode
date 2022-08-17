//测试同步
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int weight,height;
    printf("����� �����\n");
    while(scanf("%d%d",&weight,&height)==2)
    {
        if(weight<100 && height>64)
           if(height>=72)
               printf("111\n");
            else
               printf("222\n");
        else if(weight>300 && height<48)
                printf("333\n");
        else
            {
               printf("444\n");
               break;
            }
    }
    system("pause");
    return 0;
}