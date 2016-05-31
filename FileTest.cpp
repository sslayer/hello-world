#include <fstream>
#include <iostream>
using namespace std;

/* file write---
int main(){
	ofstream file;
	file.open("file.txt");
	file<<"Hello\n"<<75<<endl;
	file.close();	
	return 0;
}
*/ 

int main(){
	ifstream file;
	char output[100];
	int x;
	file.open("file.txt");
	
	file>>output;
	cout<<output<<endl;
	
	file>>x;
	cout<<x<<endl;
	
	file.close();
	return 0;
}
