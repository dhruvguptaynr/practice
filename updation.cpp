#include<iostream>
using namespace std;
int main() {
    int c;
    cin>>c;
    int arr[c];
    for (int i=0;i<c;i++) {
        cin>>arr[i];
    }
    int pos,val;
    cin>>pos>>val;
    if (pos<c) {
        arr[pos]=val;
    }
    for (int i=0;i<c;i++) {
        cout<<arr[i]<<" ";
    }

    // int sum=0;
    // for (int i=0;i<c;i++) {
    //     sum+=arr[i];
    // }
    // int act=((c+1)*(c+2))/2;
    // cout<<act-sum;

}