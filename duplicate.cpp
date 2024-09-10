#include<stdio.h>
void findduplicate(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			if(arr[i]==arr[j])
			{
				printf("duplicate elements=%d\n",arr[i]);
				break;
			}
		}
	}
}
int main()
{
	int arr[]={1,2,3,4,5,6,6,3,2};
	int size=sizeof(arr)/sizeof(arr[0]);
	findduplicate(arr,size);
	printf("%d",arr[]);
}
