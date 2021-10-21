#include<stdio.h>
struct Array
{
	int A[20];

	int size;
	int length;
};

// DISPLAYING THE ELEMENTS OF ARRAY:-
void display(struct Array arr)
{
	int i;
	printf("elements are:");
	for(i=0;i<arr.length;i++)
	{
	printf("%d",arr.A[i]);
}
}

void rightShift(struct Array *arr,int shiftCount)
{
	int i,temp;
	temp=arr->A[arr->length-1];
	while(shiftCount){

		for(i=arr->length-1;i>=1;i--)
{

		arr->A[i]=arr->A[i-1];                   // i-1 ki value i me jayegi
		arr->A[0]=temp;
	}
	}
	shiftCount--;
	}
	int main(){
 struct Array arr={{2,3,4,5,6},20,5};
 rightShift(&arr,3);
display(arr);
return 0;
}
