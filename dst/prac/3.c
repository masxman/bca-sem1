#include <stdio.h>
int gcd(int a, int b)
{
if (b == 0)
return a;
return gcd(b, a % b);
}
void main()
{
int a,b,c,res;
printf("Enter three numbers:- ");
scanf("%d %d %d",&a,&b,&c);
res=gcd(a,gcd(b,c));
printf("%d",res);
}
