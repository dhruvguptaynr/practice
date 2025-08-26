// Write code below 💖

#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        // cout<<arr[i]<<",";
    }
    int large=arr[0];
    int second_largest=arr[0];
    // int count=0;
    for (int j=0;j<n;j++) {
        // count+=arr[j];
        if (arr[j]>large) {

            second_largest=large;
            large=arr[j];
        }
        else {
            if (arr[j]>second_largest) {
                second_largest=arr[j];
            }
        }
    }
    cout<<"\n";

    // cout<<count<<"\n";
    // cout<<large<<endl;
    cout<<second_largest;

    // cin>>arr[n];
    // cout<<arr[n];
    return 0;
}