#include<iostream>
using namespace std;
void printPair(int arr[],int n) {
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            cout<<"("<<arr[i]<<" "<<arr[j]<<")";
        }
        cout <<endl;
    }
}
int main() {
    int arr[]={1,2,3};
    printPair(arr,3);
    return 0;
}
