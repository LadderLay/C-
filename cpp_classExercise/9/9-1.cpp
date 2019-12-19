#include <iostream>
#include <string>
using namespace std;

template <class T>
bool isSorted(T arr[], int n){//Ascending order
    int i;
    for(i=1; i<n; i++){
        if(arr[i] <= arr[i-1]){
            break;
        }
    }
    return i == n;
}

int main()
{
    int arr1[4] = {1, 2, 3, 4};
    cout  << isSorted(arr1,4) << endl;
    double arr2[5] = {5.0, 2.3, 3, 4, 0};
    cout  << isSorted(arr2,5) << endl;
    return 0;
}
