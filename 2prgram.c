#include<stdio.h>
int main()
{
int a,b,temp;
printf("enter first number.\n");
scanf("%d", &a);
printf("enter the second number.\n");
scanf("%d", &b);
temp=a;
a=b;
b=temp;
printf("after swapping.\n");
printf("first number=%d.\n",a);
printf("second number=%d.\n",b);
return 0;
}
