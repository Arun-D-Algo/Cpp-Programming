# include <iostream>
using namespace std; 
int main(){
    int n, sum=0, product = 1;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements : ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n; i++){
        sum += arr[i];
        product *= arr[i];
    }
    cout << "\nThe sum of all elements of the array is : " << sum << endl;
    cout << "The product of all elements of the array is : " << product << endl;
    return 0;
}