#include <iostream>
using namespace std;

#define N 4



void Multiply (int A[N][N], int B[N][N], int C[N][N])
{

  for (int i = 0; i < N; i++)
	{
	  for (int j = 0; j < N; j++)
		{
		  C[i][j] = 0;
		  for (int k = 0; k < N; k++)
			{
			  C[i][j] = A[i][k] * B[k][j];
			}

		}
	}

}


int main ()
{

  int A[N][N] = {
	{3, 4, 5, 6},
	{7, 8, 9, 10},
	{1, 2, 3, 4},
	{10, 11, 12, 1}

  };

  int B[N][N] = {
	{3, 4, 5, 6},
	{7, 8, 9, 10},
	{1, 2, 3, 4},
	{10, 11, 12, 1}

  };
  int C[N][N];

  Multiply (A, B, C);

  for (int i = 0; i < N; i++)
	{
	  for (int j = 0; j < N; j++)
		{
		  cout << C[i][j] << " ";
		}
	  cout << endl;
	}



  return 0;
}
