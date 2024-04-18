#include <iostream>
#define N 4


using namespace std;

int isSame (int A[N][N], int B[N][N])
{
  for (int i = 0; i < N; i++)
	{
	  for (int j = 0; j < N; j++)
		{
		  if (A[i][j] != B[i][j])
			{
			  return 0;
			}

		}
	}
  return 1;



}

int main ()
{
  int A[N][N] = {
	{1, 2, 3, 1},
	{5, 6, 7, 8},
	{9, 10, 11, 12},
	{13, 14, 15, 16}
  };

  int B[N][N] = {
	{1, 2, 3, 4},
	{5, 6, 7, 8},
	{9, 10, 11, 12},
	{13, 14, 15, 16}

  };

  if (isSame (A, B))
	{
	  cout << "Matrix are same";
	}
  else
	{
	  cout << "Matrix Not Same";
	}

  return 0;
}
