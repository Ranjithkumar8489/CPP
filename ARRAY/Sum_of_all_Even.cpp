#include <iostream>
using namespace std;

void sum (int arr[], int n)
{

  int sum = 0;

  for (int i = 0; i < n; i++)
	{
	  if (arr[i] % 2 == 0)
		{
		  sum += arr[i];
		}

	}
  cout << sum;

}


int main ()
{
  int arr[] = { 10, 20, 30, 40, 1, 3, 2 };

  int n = sizeof (arr) / sizeof (arr[0]);

  sum (arr, n);

  return 0;
}
