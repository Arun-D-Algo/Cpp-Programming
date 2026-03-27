#include <iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of elements in the first array : ";
    cin >> n;
    int arr1[n];
    cout << "Enter array 1 elements : ";
    for(int i=0; i<n; i++){
        cin >> arr1[i];
    }
    cout << "\n\n";
    int m;
    cout << "Enter the number of elements in the second array : ";
    cin >> m;
    int arr2[m];
    cout << "Enter array 2 elements : ";
    for(int j=0; j<m; j++){
        cin >> arr2[j];
    }
    cout << "\n\n";
    vector<int> arr3;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr1[i]==arr2[j]){
                arr3.push_back(arr1[i]);
                break;
            }
        }
    }
    cout << "Intersection elements are : ";
    for(int i = 0; i < arr3.size(); i++){
        cout << arr3[i] << " ";
    }

    return 0;   
}


