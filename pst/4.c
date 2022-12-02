#include<stdio.h>
int main(){
	int n, reversed=0, remainder, original;
	int sum=0;
	printf("Enter an integer:");
	scanf("%d",&n);
	original=n;

	//reversed integer is stored in reversed variab;e
	while(n!=0)
	{
		remainder = n%10;
		sum=sum+remainder;
		reversed = reversed*10+remainder;
		n/=10;
	}
	printf("\n the sum of digits is %d\n",sum);
	//palindrome if original and reversed are equal
	if (original == reversed)
		printf("%d is a palindrome.",original);
	else
		printf("%d is not a palindrome.",original);
	return 0;
}

