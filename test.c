#include<stdio.h>
#include<math.h>
int prime(int m)
{
  int k,i,flag=1;
  k=sqrt(m);
  for(i=2;i<=k;i++)
    if(m%i==0){flag=0;break;}
    if(flag) printf("%d 是素数\n",m);
    else printf("%d 不是素数\n",m);
}
int main()
{
  int n;
  printf("请输入一个大于1的数：");
  scanf("%d",&n);
  if(n<=1) printf("0和1不是素数!");
  else  prime(n);
  return 0;
}
