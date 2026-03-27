#include <iostream>
using namespace std;
int main(){
    int n, uniqueNum=0;
    cout << "Enter the number of elements in the array : ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements : ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << "The unique numbers in the array are : ";
    for(int i=0; i<n; i++){
        uniqueNum ^= arr[i];
    }
    cout << uniqueNum;
    return 0;
}

