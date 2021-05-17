#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

int main() {

	ifstream infile;

	string name;
	string category;
	string description;

	vector<string>nameV;
	vector<string>categoryV;
	vector<string>descriptionV;
	int i = 0;

	infile.open (“Tasks.txt”);

	if (!infile){ 
        	cout << “File cannot be opened“<< endl;
		exit (1); 
	}
	
	else{
	while(!infile.eof()) {
		getline(infile, name, ',');
		nameV.push_back(name);

		getline(infile, category, ',');
		categoryV.push_back(category);

		getline(infile, description, '\n');
		descriptionV.push_back(description);

		i++;
		}
	}
	infile.close();
	
	cout << "Task Name" << "\t" << "Task Category" << "\t" << "Task Description" << endl;
	for (int j = 0; j < i; j++) {
		cout << nameV[j] << "\t" << categoryV[j] << "\t" << descriptionV[j] << endl;
	}
}
