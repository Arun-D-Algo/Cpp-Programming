#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements : ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int maxindex=0;
    int minindex=0;
    int max = INT_MIN;
    int min = INT_MAX;
    for(int i=0; i<n; i++){
        if(arr[i]<min){
            min = arr[i];
            minindex=i;
        }
        if(arr[i]>max){
            max = arr[i];
            maxindex=i;
        }
    }
    swap(arr[maxindex], arr[minindex]);
    cout <<"The swapped array is : ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
