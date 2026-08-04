#include<iostream>

int main()
{
	int arr[]={55,66,77,22,11,52,19};
    int key=19;
	int i,n=7;
	int found=0;
	for(i=0;i<n;i++)

	{
		if(arr[i]==key)
		{
		
			printf("the value=%d found of index=%d",key,i);
			found=1;
			break;
		}
	   
	}
	if(found==0)
	{
		printf("element not found");
	}
	return 0;
}