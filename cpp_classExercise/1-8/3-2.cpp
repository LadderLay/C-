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

int main()
{
	int e;
	StackOfIntegers S;
	cout << "Initial size: " << S.getSize() << endl;
	cout << "Please input a value to push: " << endl;
	cin >> e;
	S.push(e);
	cout << "The peek value of the stack is: " << S.peek() << endl;
	S.pop();
	cout << "Size of the stack after poping an element is: " << S.getSize() << endl;
	cout << "The stack is empty or not(1Y/0N) :" << S.empty() << endl;
	return 0;
}
