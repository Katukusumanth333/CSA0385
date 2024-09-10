#include<stdio.h>
void sort(int arr[],int n){
for(int i=0;i<n-1;i++){
	for(int j=0;j<n-i-1;j++){
		if(arr[j]>arr[j+1]){
			int temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
	}
}
}
int main()
{
	int arr1[]={3,6,1,7,8,4,7,9,2,3};
	int n1=sizeof(arr1)/sizeof(arr1[0]);
	int arr2[]={8,4,7,1,2,9,4,3};
	int n2=sizeof(arr2)/sizeof(arr2[0]);
    int merged[n1+n2];
    for(int i=0;i<n1;i++)
    {
    	merged[i]=arr1[i];
	}
	for(int i=0;i<n2;i++){
		merged[n1+i]=arr2[i];
	}
	printf("merged array:\n");
	for(int i=0;i<n1+n2;i++)
	{
		printf(" %d",merged[i]);
	}
	printf("\n");
	sort(merged,n1+n2);
	printf("sorted array:\n");
	for(int i=0;i<n1+n2;i++)
	{
		printf(" %d",merged[i]);
	}
}
