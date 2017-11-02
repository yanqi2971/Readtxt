#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	ifstream fin;
	fin.open("Readtxt.txt");
	string line;
	while(getline(fin,line)){
		cout << line << endl;
	}
	fin.close();
	cout << "the end." << endl;
	return 0;
}
