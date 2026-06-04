#include<iostream>
#include<fstream>
#include<string>
using namespace std;
    int countLines(string filename) {
    ifstream file(filename.c_str());
    if (!file) {
    cout<<"error opening file is count lines!"<<endl;
    return 0;
	}
	int count=0;
	string line;
	while (getline(file,line)) {
	count++;
	}
	file.close();
	return count;
	}
	int main() {
	string filename = "notes.txt";
	
	ofstream outfile(filename.c_str());
	if(outfile.is_open()) {
	outfile<<"line 1: hello world!"<<endl;
	outfile<<"line 2: lab tasks are fun"<<endl;
	outfile<<"line 3: c++ file handling."<<endl;
	outfile.close();
	cout<<"file created and 3 lines written successfully."<<endl;
	}
	ifstream infile(filename.c_str());
	if (infile.is_open()) {
	string line;
	cout<<" Reading File content "<<endl;
	while(getline(infile, line)) {
	cout<<line<<endl;
	}
	infile.close();
	}
	ofstream appendfile(filename.c_str(),ios::app);
	if (appendfile.is_open()) {
	appendfile<<"\n your name-Roll no:1234"<<endl;
	appendfile.close();
	cout<<"\n Appended name and roll Number."<<endl;
	}
	int totallines = countLines(filename.c_str());
	cout<<"Total lines in file: "<<totallines<<endl;
	
	string copyfilename = "copy_notes.txt";
	ifstream source(filename.c_str());
	ofstream dest(copyfilename.c_str());
	
	if (source && dest) {
	string line;
	while (getline(source,line)) {
	dest << line <<endl;
	}
	source.close();
	dest.close();
	cout<<"content copied from"<< copyfilename << "to "<<endl;
	
	cout<<"lines in new file: "<<countLines(copyfilename.c_str()) <<endl;
	} else {
	cout<<"Error copying file!"<<endl;
	}
	return 0;
}
