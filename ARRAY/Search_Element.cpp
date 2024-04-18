#include <iostream>

using namespace std;

int main ()
{
  int arr[] = { 10, 20, 30, 40, 50 };
  int size = sizeof (arr) / sizeof (arr[0]);

  int search = 30;
  int foundIndex = -1;

  for (int i = 0; i < size; i++)
	{
	  if (arr[i] == search)
		{
		  foundIndex = i;
		  break;

		}

	}

  if (foundIndex == -1)
	{
	  cout << "not found" << endl;
	}
  else
	{
	  cout << foundIndex << endl;
	}

  return 0;
}
