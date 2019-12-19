#include <iostream>
using namespace std;

class StackOfIntegers
{
	int elements[100];
	int size;
	public:
		StackOfIntegers(){
			size=0;
		}
		int getSize(){
			return size;
		}
		bool empty(){
			if(!size)	return true;
			return false;
		}
		int peek(){
			if(!size){
				cout << "The stack is empty!" << endl;
				return 0;
			}
			int e = elements[size-1];
			return e;
		}
		int pop(){
			int e = elements[--size];
			return e;
		}
		bool push(int value){
			if(size == 100)	return false;
			elements[size++] = value;
			return true;
		}

};
StackOfIntegers getFactors(int n){
	int i = 2;
	StackOfIntegers factors;
	while(n>=2){
		if(n%i == 0){
			factors.push(i);
			n/=i;
		}else{
			i++;
		}
	}
	return factors;
}

int main()
{
	int n,size;
	StackOfIntegers f;
	cout << "Please input a positive integer:" << endl;
	cin >> n;
	cout << "prime factors are as follows:" << endl;
	f = getFactors(n);
	size = f.getSize();
	for(int i=0; i<size; i++){
		cout << f.pop() << " ";
	}
	return 0;
}
