#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    int id,v;
    map< int, vector<int> > m;
    ifstream file;
    file.open("data.txt");
    file >> n;
    for(int i=0; i<n; i++){
        string s;
        file >> s;
        if(s == "new"){
            file >> id;
            m[id] = vector<int>();//
        } else if(s == "add"){
            file >> id >> v;
            m[id].push_back(v);
        } else if(s == "merge"){
            int id1,id2;
            file >> id1 >> id2;
            for(auto it=m[id2].begin(); it!=m[id2].end(); it++){
                m[id1].push_back(*it);
            }
            m[id2].clear();
            sort(m[id1].begin(), m[id1].end());
        } else if(s == "out"){
            file >> id;
            for(auto it=m[id].begin(); it!=m[id].end(); it++){
                cout << *it << " ";
            }
            cout << endl;
        } else if(s == "unique"){
            file >> id;
            m[id].erase(unique(m[id].begin(), m[id].end()), m[id].end());
        }
    }
    return 0;
}
