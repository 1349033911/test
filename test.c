#include<stdio.h>
#include<math.h>
int prime(int m)
{
  int k,i,flag=1;
  k=sqrt(m);
  for(i=2;i<=k;i++)
    if(m%i==0){flag=0;break;}
    if(flag) printf("%d ������\n",m);
    else printf("%d ��������\n",m);
}
int main()
{
  int n;
  printf("������һ������1������");
  scanf("%d",&n);
  if(n<=1) printf("0��1��������!");
  else  prime(n);
  return 0;
}
