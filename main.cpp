#include <iostream>
using namespace std;


int sort(int arr[],int size)
{
	int tmp = 0;
	for(int i = 0;i < size -1;i++)
	{
		for(int j = 0;j<size-1-i;j++)
		{
			if(arr[j] > arr[j+1])
			{
				tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			
			}
		
		}
	}



}

//Wxj995-1添加的注释
//Ubuntu995添加的代码


int main()
{
	int arr[] = {12,4,5,6,7,88,888};
	int size = sizeof(arr)/sizeof(arr[0]);
	sort(arr,size);

	return 0;
}
