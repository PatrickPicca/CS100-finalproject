#include <iostream>
#include <fstream>

using namespace std;

int main() {

ifstream infile;
ofstream outfile;

infile.open (“Tasks.txt”);

if (!infile){ 
cout << “File cannot be opened“<< endl;
exit (1); 
}
outfile.open (“Tasks.txt);
infile >> arrayTasks; 
for(i=0; i< arrayTasks.size();I++) { 
outfile << arrayTasks[i]<< endl;
infile>> arrayTasks; 
};

infile.close();
outfile.close ();

return 0; 
}
