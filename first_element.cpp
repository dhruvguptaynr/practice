#include<iostream>
using namespace std;
void printFirstElement(int arr[],int n) {
    cout<<arr[0]<<endl;
}
int main() {
    int arr[]={5,10,15,20};
    printFirstElement(arr,4);
    return 0;
}