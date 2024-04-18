#include <iostream>
using namespace std;

int findMissingNumber (int arr[], int n)
{

  int total = (n + 1) * (n + 2) / 2;

  for (int i = 0; i < n; i++)
	{
	  total -= arr[i];
	}
  return total;

}

int main ()
{
  int arr[] = { 1, 2, 4, 5, 6 };
  int size = sizeof (arr) / sizeof (arr[0]);

  cout << findMissingNumber (arr, size);

  return 0;
}
