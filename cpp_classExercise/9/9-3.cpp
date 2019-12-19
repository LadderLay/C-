#include <iostream>
#include <string>
using namespace std;

template <class T>
class Stack
{
    private:
        int size;
        T elements[100];
    public:
        Stack();
        bool empty();
        T peek();
        T pop();
        void push(T v);
        int getSize();
};
template <class T>
Stack<T>::Stack(){
    size = 0;
}

template <class T>
bool Stack<T>::empty(){
    return size == 0;
}


template <class T>
T Stack<T>::peek(){
    if(size == 0){
        cout << "The stack is empty!" << endl;
        return 0;
    }
    T e = elements[size-1];
    return e;
}

template <class T>
T Stack<T>::pop(){
    T e = elements[--size];
    cout << "pop: " << e << endl;
    return e;
}

template <class T>
void Stack<T>::push(T v){
    if(size == 100){
        cout << "The stack is full!" << endl;
    }
    elements[size++] = v;
}

template <class T>
int Stack<T>::getSize(){
    return size;
}


int main()
{
	double e;
	Stack<double> S;

	cout << "Initial size: " << S.getSize() << endl;
	cout << "Please input a value to push: " << endl;
	cin >> e;
    S.push(e);
    cout << "Please input a value to push: " << endl;
	cin >> e;
	S.push(e);
	cout << "The peek value of the stack is: " << S.peek() << endl;
	S.pop();
	cout << "Size of the stack after poping an element is: " << S.getSize() << endl;
    S.pop();
	cout << "The stack is empty or not(1Y/0N) :" << S.empty() << endl;

    /*
    int e;
	Stack<int> S;

	cout << "Initial size: " << S.getSize() << endl;
	cout << "Please input a value to push: " << endl;
	cin >> e;
    S.push(e);
    cout << "Please input a value to push: " << endl;
	cin >> e;
	S.push(e);
	cout << "The peek value of the stack is: " << S.peek() << endl;
	S.pop();
	cout << "Size of the stack after poping an element is: " << S.getSize() << endl;
    S.pop();
	cout << "The stack is empty or not(1Y/0N) :" << S.empty() << endl;
    */
	return 0;
}
