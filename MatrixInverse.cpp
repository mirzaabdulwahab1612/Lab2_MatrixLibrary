#include "stdafx.h"

#include <vector>
#include <iostream>
#include <stdio.h>
#include <math.h>
#include "MatrixLib.h"

using namespace std;
using namespace MatrixLib;

vector<vector<double>> Class1::transpose(vector<vector<double>> A) {
	int row = A.size();
	int column = A[0].size();
	vector<vector<double>> matrix(column , vector<double>(row));
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			matrix[j][i] = A[i][j];
		}
	}

	return matrix;
}
