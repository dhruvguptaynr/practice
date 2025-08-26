#include<iostream>
using namespace std;
int main() {
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    for (int i=0;i<m;i++) {
        for (int j=0;j<n;j++) {
            cin>>arr[i][j];
        }
    }
    int mn =m*n;
    int arr1[mn];
    int k=0;
    int t=0,l=0;
    int b=m-1,r=n-1;
    while (t<=b && l<=r){
        for (int i=l;i<=r;i++) {
            arr1[k++]=arr[t][i];
        }
        t++;
        for (int i=t;i<=b;i++) {
            arr1[k++]=arr[i][r];
        }
        r--;
        if (t<=b) {
            for (int i=r;i>=l;i--) {
                arr1[k++]=arr[b][i];
            }
            b--;
        }
        if (l<=r) {
            for (int i=b;i>=t;i--) {
                arr1[k++]=arr[i][l];
            }
            l++;
        }

        }



    for (int i=0;i<mn;i++) {
        cout<<arr1[i]<<" ";
    }

}