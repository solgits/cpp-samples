/*
// Accessing Array Elements
*/


#include <iostream>

int main()
{
	int arr[] = {11, 22, 33, 44, 55, 66, 77};
	int n=0;

	while(n < 7)
	{
		std::cout<<arr[n]<<endl;
		n++;
	}
	
	return 0;
}