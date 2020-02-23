#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <vector>
#include <iomanip>
#include <cmath>
using namespace std;

void ReadingFile(int& n, vector<vector<vector<int>>> results,vector<string> names) {
	ifstream file("nnn.csv");
	
	if (file.is_open()) {
		string line;
		getline(file, line);
		istringstream koor(line);
		koor >> n ;//количество команд 
		cout << n  << endl;
		for (int i = 0; i < n; i++) {
			string name;
			getline(file, line);
			istringstream in(line);
			getline(in, name, ',');
			names.push_back(name);
			cout << name<<endl;
			results.push_back(vector<vector<int>>(20,  vector<int>(4)));
			for (int j = 0; j < 10; j++) {
				
				for (int l = 0; l < 4; l++) {
					if (in >> results[i][j][l]) {
						
					}
					else {
						
						in.clear();
						in.ignore();
					}
					
					
					cout <<i<<j<<l<<" = "<< results[i][j][l]<<"   ";
				}
				cout << endl;
				
				
			}
		    
		
			
		}
	}
	else {
		cout << "Не удалось открыть файл" << endl;
	}
	cout << results[0][1][1];
	
}
void del_matr(int** matrix, int n) {
	for (int i = 0; i < n; i++) {
		delete[]matrix[i];
	}
	delete[]matrix;
}


int** CreateMatrix(int n, int m) {
	int** matrix = new int* [n];
	for (int i = 0; i < n; i++)
		matrix[i] = new int[m];
	return matrix;

}

