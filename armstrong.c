#include<stdio.h>
#include<conio.h>
void main( )
{
int i,j,flag,n1,n2;
printf("enter n1 and n2 ");
scanf("%d%d",&n1,&n2);
printf("The prime number from n1 to n2 are:\n");
for(i = n1 ; i <= n2 ; i++)
{
 for(j = 2 ; j < i/2 ; j++)
 if((i % j) == 0)
 {
flag = 0;
break;
 }
 else
 flag = 1;
if(flag)
 printf("%3d ",i);
}
}
