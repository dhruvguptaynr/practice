#include<iostream>
using namespace std;
int luck(int arr[],int n){
    int min=arr[0];
    int mn_f=1;
    for (int i=1;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
            mn_f=1;
        }
        else if(min==arr[i]){
            mn_f++;
        }
    }
    return mn_f;
}
int main(){
    int x;
    cin>>x;
    int arr[x];
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    cout<<(luck(arr,x)%2==1?"Lucky":"Unlucky");
}