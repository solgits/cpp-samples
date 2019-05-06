/*
// Accessing Array Elements
*/

#include <iostream>

int main()
{
	int arr[] = { 11, 22, 33, 44, 55, 66, 77 };
	int len = sizeof(arr) / sizeof(int);

	for(int n=0; n < len; n++)
	while (n < len)
	{
		std::cout << arr[n] << std::endl;
		n++;
	}

	return 0;
}