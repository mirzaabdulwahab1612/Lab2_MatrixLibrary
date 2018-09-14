#pragma once
// MatrixLib.h

#pragma once

using namespace System;
using namespace std;
#include <vector>

namespace MatrixLib {

	class Class1
	{
	public:
		vector<vector<double>>Multiply(vector<vector<double>> A, vector<vector<double>> B);
		vector<vector<double>>transpose(vector<vector<double>> A);
		vector<vector<double>>add(vector<vector<double>> A, vector<vector<double>> B);
		vector<vector<double>>subtract(vector<vector<double>> A, vector<vector<double>> B);
	};
}
