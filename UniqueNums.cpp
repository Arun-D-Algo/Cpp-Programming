#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of elements in the array : ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements : ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << "The unique numbers in the array are : ";
    for(int i = 0; i < n; i++){
        int count = 0;

        for(int j = 0; j < n; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }

        if(count == 1){
            cout << arr[i] << " ";
        }
    }

    return 0;
}

