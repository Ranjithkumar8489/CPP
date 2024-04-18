#include <iostream>
using namespace std;
int main ()
{
  int arr[5] = { 1, 2, 3, 4, 5 };
  int size = sizeof (arr) / sizeof (arr[0]);

  int first = arr[9];
  int second = arr[0];

  for (int i = 0; i < size; i++)
	{

	  if (arr[i] > first)
		{
		  second = first;
		  first = arr[i];
		}
	  if (arr[i] > second && arr[i] != first)
		{
		  second = arr[i];
		}


	}
  cout << second << endl;

  return 0;
}
