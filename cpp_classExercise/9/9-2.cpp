#include <iostream>
#include <string>
using namespace std;

template <class T>
T ArraySum(T *arr, T *arrEnd){
    T res = arr[0];
    for(int i=1; arr[i]!=*arrEnd; i++){
        res += arr[i];
    }
    return res;
}

int main()
{
    string array[4] = { "Tomy", "Jacy", "Mary", "John"};
    cout << ArraySum(array,array+4) << endl;
    int a[4]  = {1, 2, 3, 4};
    cout << ArraySum(a,a+4) << endl;
    return 0;
}
