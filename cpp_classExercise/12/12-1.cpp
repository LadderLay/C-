#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <map>
#include <utility>
using namespace std;

int main()
{
	ifstream file;
	map < string,int > S;
	multimap < int,string,greater<int> > Res;
	file.open("12-1.txt");
	string s;

	while(!file.eof()){
		getline(file,s);
		map<string,int>::iterator pr = S.find(s);
		if(pr != S.end()){
			pr->second++;
		}else{
			S.insert(make_pair(s,1));
		}
	}

	map<string,int>::iterator p;
	for(p=S.begin(); p!=S.end();p++){
		Res.insert(make_pair(p->second,p->first));
	}
	multimap<int,string>::iterator pt;
	for(pt=Res.begin(); pt!=Res.end();pt++){
		cout << pt->second << " " << pt->first << endl;
	}

	file.close();

	return 0;
}
