#include <iostream>
using namespace std;
int insert(int arr[],int n,int x) {
    for (int i=n;i>0;i--) {
        arr[i]=arr[i-1];
    }
    arr[0]=x;
    return n+1;

}
int insertbtw(int arr[],int n,int x,int y) {
    for (int i=n;i>0;i--) {
        arr[i]=arr[i-1];
        if (i==y) {
            arr[i]=x;
        }
    }
    return n+1;

}
int insertaft(int arr[],int n,int x) {
    arr[n]=x;
    return n+1;
}
int deletes(int arr[],int n){
    for (int i=0;i<n-1;i++) {
        arr[i]=arr[i+1];
    }
    return n-1;
}
int deletel(int arr[],int n) {
    return n-1;
}
int deletval(int arr[],int n,int x) {
    bool isthere=false;
    for (int i=0;i<n;i++) {
        if (arr[i]==x) {
            isthere=true;
        }
        if (isthere) {
            arr[i]=arr[i+1];
        }
    }
    return n-1;

}
int deleteindx(int arr[],int n,int x) {
    bool isthere=false;
    for (int i=0;i<n;i++) {
        if (i==x) {
            isthere=true;
        }
        if (isthere) {
            arr[i]=arr[i+1];
        }
    }
    return n-1;

}

int main() {
    int n;
    cin>>n;
    int arr[10];
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int x;
    cin>>x;
    n=deleteindx(arr,n,x);

    for (int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }

}