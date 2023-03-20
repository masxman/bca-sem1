#include <stdio.h>
int m,n, i, j;
int a[10][10];
int b[10][10];
int sum[10][10];
int diff[10][10];
void enterData(int a[10][10]);
void addMatrix(int a[10][10], int b[10][10]);
void subMatrix(int a[10][10], int b[10][10]);
void display(int sum[10][10]);

int main(){

printf("\n enter rows and columns for the matrix");
scanf("%d %d", &m, &n);

printf("\nEnter elements of matrix 1:\n");
enterData(a);
printf("\nmatrix1\n");
display(a);

printf("\nEnter elements of matrix 2:\n");
enterData(b);
printf("\nmatrix2\n");
display(b);

addMatrix(a,b);
printf("\n Sum of two matrix is: \n");
display(sum);
subMatrix(a,b);
printf("\n difference of two matrix is: \n");
display(diff);
}


void enterData(int a[10][10])
{
int i, j;
for(i = 0; i < m; ++i)
{
for(j = 0; j < n; ++j)
{


scanf("%d", &a[i][j]);
}
}
}

void display(int sum[10][10])
{

int i, j;

for(i = 0; i < m; ++i)
{
for(j = 0; j < n; ++j)
{
printf("%d  ", sum[i][j]);
}
    printf("\n\n");
}
}


void addMatrix(int a[10][10], int b[10][10]){
  for(i = 0; i < m; ++i)
{
for(j = 0; j < n; ++j){
      sum[i][j]= a[i][j]+b[i][j];
    }
}
}

void subMatrix(int a[10][10], int b[10][10]){
	for(i-0;i<m;++i)
	{
		for(j=0;i<n;++i)
		{
			diff[i][j]=a[i][j]-b[i][j];
		}}}
