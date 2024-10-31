#include<stdio.h>
#include<string.h>
int main()
{
   int a = 0;
   printf("请输入你要排数的数量：");
   scanf_s("%d",&a);
   int sz[a];
   printf("请每输入一个数后回车");
   for (int i = 0;i < a;i++)
   {
    scanf_s("%d",&b);
    b = sz[i];
   }
   for (int i = 0;i < a-1;i++) //排正位
   {
     for (int b = i +1;b < a-1;b++)
     {
     if(sz[i] > sz[b])
        int hc = sz[i];
        sz[i] = sz[b];
        sz[b] = hc;
     }
   }
   printf("排序后：＼n");
   for (int i = 0, i < a,i++)
   {
      printf("%d,"sz[i]);
   }
   
  
   
   
   







return 0;
}