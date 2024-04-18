#include <iostream>
using namespace std;

#define N 4

void additon (int A[N][N], int B[N][N], int C[N][N])
{
  for (int i = 0; i < N; i++)
	{
	  for (int j = 0; j < N; j++)
		{
		  C[i][j] = A[i][j] + B[i][j];
		}
	}

}

void Subtraction (int A[N][N], int B[N][N], int D[N][N])
{
  for (int i = 0; i < N; i++)
	{
	  for (int j = 0; j < N; j++)
		{
		  D[i][j] = A[i][j] - B[i][j];
		}
	}

}

int main ()
{
  int A[N][N] = {
	{10, 22, 33, 44},
	{52, 26, 27, 28},
	{29, 20, 21, 22},
	{33, 34, 35, 36}

  };
  int B[N][N] = {
	{1, 2, 3, 4},
	{5, 6, 7, 8},
	{9, 10, 11, 12},
	{13, 14, 15, 16}

  };

  int C[N][N];
  additon (A, B, C);

  for (int i = 0; i < N; i++)
	{
	  for (int j = 0; j < N; j++)
		{
		  cout << C[i][j] << " ";

		}
	  cout << endl;
	}

  cout << "----------------" << endl;


  int D[N][N];

  Subtraction (A, B, D);

  for (int i = 0; i < N; i++)
	{
	  for (int j = 0; j < N; j++)
		{
		  cout << D[i][j] << " ";

		}
	  cout << endl;
	}


  return 0;
}
