#include <iostream>

using namespace std;

void Descending (int arr[], int n)
{

  for (int i = 0; i < n; i++)
	{
	  for (int j = i + 1; j < n; j++)
		{

		  if (arr[i] < arr[j])
			{
			  int temp = arr[i];
			  arr[i] = arr[j];
			  arr[j] = temp;
			}
		}
	}


}

void Ascending (int arr[], int n)
{

  for (int i = 0; i < n; i++)
	{
	  for (int j = i + 1; j < n; j++)
		{
		  if (arr[i] > arr[j])
			{
			  int temp = arr[i];
			  arr[i] = arr[j];
			  arr[j] = temp;
			}
		}
	}


}


int main ()
{
  int arr[] = { 19, 10, 29, 39, 49, 59 };
  int n = sizeof (arr) / sizeof (arr[0]);

  Descending (arr, n);

  for (int i = 0; i < n; i++)
	{
	  cout << arr[i] << " ";
	}
  cout << endl;
  Ascending (arr, n);
  for (int i = 0; i < n; i++)
	{
	  cout << arr[i] << " ";
	}



  return 0;
}
