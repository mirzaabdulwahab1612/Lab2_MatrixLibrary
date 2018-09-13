#include "Stdafx.h"
#include "MatrixLib.h"
#include <vector>
#include <iostream>

using namespace MatrixLib;
using namespace std;

vector<vector<double>> Class1::Multiply(vector<vector<double>> A, vector<vector<double>> B)
{
	int columnA = A[0].size();
	int rowB = B.size();

	if (columnA != rowB)
	{
		cout << "Dimension not compatible" << endl;
		system("pause");
		exit(0);
	}
	else
	{
		int rowA = A.size();
		int colB = B[0].size();                                    //Dimensions for the new matrix. rowA * colB.
		vector<vector<double>> C( rowA, vector<double>(colB) ); //We know the size so declare it such. Again, arrays would have been perfect!
										

		for (int i = 0; i < rowA; i++)
		{
			for (int k = 0; k < colB; k++)
			{
				
				for (int inner = 0; inner < columnA; inner++)
				{
					
					C[i][k] += A[i][inner] * B[inner][k];
				}
			}
		}

		return C;
	}
}
