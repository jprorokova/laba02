#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <vector>
#include <iomanip>
#include <cmath>
using namespace std;

int** CreateMatrix(int n, int m);
void ReadingFile(int& n, vector<vector<vector<int>>> results,vector<string> names);
void del_matr(int** matrix, int n);