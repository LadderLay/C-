#include <iostream>
#include <fstream>
#include<sstream>
#include <algorithm>
#include <map>
#include <set>
using namespace std;

int main()
{
	string s,str;
	set<string> stops;
	map< string,int > res;
	multimap < int,string,greater<int> > R;

	ifstream stopWords,text;
	stopWords.open("stopwords.txt");
	text.open("text.txt");

	while(!stopWords.eof()){ 
		stopWords >> s;
		stops.insert(s);
	}

	while(!text.eof()){
		getline(text,str);
    	for (int i = 0; i < str.length(); i++){  
        	if(str[i]==',' || str[i]=='.' || str[i]=='!')
        		str[i] = ' ';
    	} 
    	stringstream ss(str);
    	string word;
    	while(ss >> word){
    		if(stops.find(word) == stops.end()){
    			res[word]++;
    		}
    	}
	}

	map<string,int>::iterator p;
	for(p=res.begin(); p!=res.end();p++){
		R.insert(make_pair(p->second,p->first));
	}
	multimap<int,string>::iterator pt = R.begin();
	for(int cnt=0; cnt<20;cnt++){
		cout << pt->second << " " << pt->first << endl;
		pt++;
	}

	stopWords.close();
	text.close();

	return 0;

	
}
