#include <iostream>
#include <algorithm>
#include <set>
#include <fstream>
using namespace std;

int main()
{
	multiset<int> st;
	set<int> se;
	int n,i;
	ifstream file;
    file.open("example.txt");
	file >> n;
	for(int j=0; j<n; j++){
		string s;
		file >> s;
		if(s == "add") {
			file >> i;
			st.insert(i);
			se.insert(i);
			cout << st.size() << endl;
		} else if(s == "del") {
			file >> i;
			cout << st.count(i) << endl;
			st.erase(i);
		} else if(s == "ask") {
			file >> i;
			if(se.find(i) == se.end())	cout << "0 ";
			else	cout << "1 ";				
			cout << st.count(i) << endl;
		}
	}
	return 0;
}