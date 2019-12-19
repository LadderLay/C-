#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

struct Point
{
	int x;
	int y;
};

class Rule1{
public:
	bool operator() (const int & as, const int & ae){
		int a = as % 10;
		int b = ae % 10;
		if(a != b)	return a < b;
		else	return as > ae;
	}
};

class Rule2{
public:
	bool operator() (const Point & as, const Point & ae){
		int ds = pow(as.x,2) + pow(as.y,2);
		int de = pow(ae.x,2) + pow(ae.y,2);
		if(ds == de) {
			if(as.x == ae.x)
				return as.y < ae.y;
			else 
				return as.x < ae.x;
		} else {
			return ds < de;
		}
	}
};

int main()
{
	int a[8] = {6, 5, 55, 23, 3, 9, 87, 10};
	sort(a, a+8,  Rule1());
	for(int i=0; i<8; ++i)
		cout << a[i] << ",";
	cout << endl;
	Point ps[8] = {{1,0}, {0,1}, {0,-1}, {-1,0}, {1,-1}, {1,1}, {2,0}, {-2,0}};
	sort(ps, ps+8, Rule2());
	for(int i=0; i<8; ++i)
		cout << "(" << ps[i].x << "," << ps[i].y << ")";
	return 0;
}