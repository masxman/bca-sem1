#include<stdio.h>
int main()
{

int num,sum=0;

printf("Enter Postive numbers to sum and enter 999 to exit");

while(1){
    printf("\nEnter number:");
	scanf("%d",&num);
	
	if(num==999){
		break;
	}
    
	if(num>0){
      sum=sum+num;
    }
    else{
      printf("\n enter a positive number");
    }
}	

printf("\n Sum = %d",sum);
return 0;
}

