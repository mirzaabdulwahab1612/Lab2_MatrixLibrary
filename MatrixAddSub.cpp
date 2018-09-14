#include "stdafx.h"
#include "MatrixLib.h"
#include <stdio.h>
#include <vector>
#include <iostream>

using namespace MatrixLib;
using namespace std;

vector<vector<double>> Class1::add(vector<vector<double>> A, vector<vector<double>> B)
{
	if (A.size() == B.size() && A[0].size() == B[0].size()) {
		vector<vector<double>> C(A.size(), vector<double>(A[0].size()));
		int i, j;
		for (i = 0; i < A.size(); i++)
			for (j = 0; j < A[i].size(); j++)
				C[i][j] = A[i][j] + B[i][j];
		return C;
	}
	else {
		cout << "Dimensions not suitable for addition"; 
		system("pause");
		exit(0);
	}
	
}

vector<vector<double>> Class1::subtract(vector<vector<double>> A, vector<vector<double>> B)
{
	if (A.size() == B.size() && A[0].size() == B[0].size()) {
		vector<vector<double>> C(A.size(), vector<double>(A[0].size()));
		int i, j;
		for (i = 0; i < A.size(); i++)
			for (j = 0; j < A[i].size(); j++)
				C[i][j] = A[i][j] - B[i][j];
		return C;
	}
	else {
		cout << "Dimensions not suitable for subtraction";
		system("pause");
		exit(0);
	}
}
