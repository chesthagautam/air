#include<stdio.h>
int main()
{
int n,arr[100];
scanf("%d",&n);

for(int s=0;s<n;s++)
{
	scanf("%d",arr[s]);
}
int i,j;
for(i=0,j<n-1;i<j;i++,j--)
{
	int temp;
	temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
}
printf("%d ",arr[i]);

}
