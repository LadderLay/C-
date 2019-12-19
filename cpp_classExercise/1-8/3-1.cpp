#include <iostream>
#include <cmath>
using namespace std;

class MyInteger
{
    int value;
    public:
        MyInteger(int value);
        int getValue();
        bool isEven(int v);
        bool isPrime(int v);
        bool equals(int v);
        bool equals(MyInteger &x);
};
MyInteger::MyInteger(int value){
    this->value = value;
}
int MyInteger::getValue(){
    return value;
}
bool MyInteger::isEven(int v){
    if(v%2) return false;
    return true;
}
bool MyInteger::isPrime(int v){
    int t = sqrt(v);
    for(int i=2; i<=t; i++){
        if(v%i) continue;
        return false;
    }
    return true;
}
bool MyInteger::equals(int v){
    if(value == v)  return true;
    return false;
}
bool MyInteger::equals(MyInteger & he){
    if(value == he.getValue())  return true;
    return false;
}

int main(){
    int v;
    cout << "Please input a value to create an instance:" << endl;
    cin >> v;
    MyInteger my(v);
    cout << "The value of the instance is: " << my.getValue() << endl;
    cout << v << " is Even: " << my.isEven(v) << endl;
    cout << v << " is Prime: " << my.isPrime(v) << endl;
    cout << "Please input a value to create another instance:" << endl;
    cin >> v;
    MyInteger he(v);
    cout << "The two number Equal: " << my.equals(v) << endl;
    cout << "The two number Equal: " << my.equals(he) << endl;
    return 0;
}
