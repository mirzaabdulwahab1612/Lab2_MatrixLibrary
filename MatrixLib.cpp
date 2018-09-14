// This is the main DLL file.

#include "stdafx.h"
#include <iostream>
#include "MatrixLib.h"
using namespace MatrixLib;

void main() {
	int choice;
	int row, col, row1, col1;
	vector<vector<double>> result;
	Class1 matrixhandler;
	cout << "Welcome to MatrixLibrary Testing!" << endl;
	cout << "Please Chose The function you want to test:" << endl;
	cout << "1- Matrix Addition (Press 1)" << endl;
	cout << "2- Matrix Subtraction (Press 2)" << endl;
	cout << "3- Matrix Multiplication (Press 3)" << endl;
	cout << "4- Matrix Transpose (Press 4)" << endl;
	cout << "Your choice: ";
	cin >> choice;
	if (choice >= 1 && choice <= 3) {
		
		cout << "Please Enter First Matrix's dimension: (Space seperated (row column)): ";
		cin >> row >> col;
		cout << "Please Enter Second Matrix's dimension: (Space seperated (row column)): ";
		cin >> row1 >> col1;

		vector<vector<double>> vect1(row, vector<double>(col));
		vector<vector<double>> vect2(row1, vector<double>(col1));
		
		cout << "Enter First Matrix's values: (one by one)" << endl;
		for (int i = 0; i < row; i++) {
			cout << "Row Number: " << i + 1 << endl;
			for (int j = 0; j < col; j++) {
				cout << "Column Numebr: " << j + 1 << " : ";
				cin >> vect1[i][j];
			}
		}
		cout << "Enter Second Matrix's values: (one by one)" << endl;
		for (int i = 0; i < row1; i++) {
			cout << "Row Number: " << i + 1 << endl;
			for (int j = 0; j < col1; j++) {
				cout << "Column Numebr: " << j + 1 << " : ";
				cin >> vect2[i][j];
			}
		}
		if (choice == 1) {
			result = matrixhandler.add(vect1, vect2);
		}
		if (choice == 2) {
			result = matrixhandler.subtract(vect1, vect2);
		}
		if (choice == 3) {
			result = matrixhandler.Multiply(vect1, vect2);
		}
	}
	else if (choice == 4) {
		cout << "Please Enter Matrix's dimension: (Space seperated (row column)): ";
		cin >> row >> col;
		vector<vector<double>> vect1(row, vector<double>(col));
		cout << "Enter Matrix's values: (one by one)" << endl;
		for (int i = 0; i < row; i++) {
			cout << "Row Number: " << i + 1 << endl;
			for (int j = 0; j < col; j++) {
				cout << "Column Numebr: " << j + 1 << " : ";
				cin >> vect1[i][j];
			}
		}
		result = matrixhandler.transpose(vect1);
	}
	
	//vector<vector<double>> vect1 = { { 1, 2, 3 },
	//{ 4, 5, 6 },
	//{ 7, 8, 9 } };

	//vector<vector<double>> vect2 = { { 1, 2, 3 },
	//{ 4, 5, 6 },
	//{ 7, 8, 9 } };

	//Class1 c1;

	//vector<vector<double>> trans = c1.subtract(vect1 , vect2);
	////cout << trans.size() << endl << trans[0].size();

	cout << "Result: " << endl;
	for (int i = 0; i < result.size(); i++) {
		for (int j = 0; j < result[i].size(); j++) {
			cout << result[i][j] << " , ";
		}
		cout << endl;
	}
	system("pause");

}