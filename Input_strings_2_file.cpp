//-------------------------------------
//
//
//-------------------------------------
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <time.h>
//#include <stdlib.h>
using namespace std;

int main(){
	vector<string> TempForInput;
	string line;
//	char* wday[7] ={"Sun","Mon","Tue","Wed","Thu","Fir","Sat"};
//	string wday[7]("Sun","Mon","Tue","Wed","Thu","Fir","Sat");
	string wday[7] = {"Sun","Mon","Tue","Wed","Thu","Fir","Sat"};
//	ifstream in("StringInput.txt");
	ofstream out;
	time_t nowTime;
	time(&nowTime);
	tm* t_tm = localtime(&nowTime);
	cout << "input string quit with \"exit\"!"<<endl;
	out.open("StringInput.txt",ios::app);
	out << "Input time is: "<<t_tm->tm_year+1900<<"/"<<t_tm->tm_mon+1<<"/"<<t_tm->tm_mday<<" "<<wday[t_tm->tm_wday]<<" "<<t_tm->tm_hour<<":"<<t_tm->tm_min<<":"<<t_tm->tm_sec<<endl; 
	while(1){
		getline(cin, line, '\n');
		if (line == "exit\0")
			break;
		else
		TempForInput.push_back(line);
	}
//	cin.get()!=27

	for (int i=0; i<TempForInput.size(); i++){
		out<<i+1<<". "<<TempForInput[i]<<endl;
	}
	out.close();
	return 0;
}
