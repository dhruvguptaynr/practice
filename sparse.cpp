#include<iostream>
using namespace std;
int main() {
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    int max=100;
    int trip[max][3];
    int k=0;
    for (int i=0;i<m;i++) {
        for (int j=0;j<n;j++) {
            cin>>arr[i][j];
            if (arr[i][j]!=0) {
                trip[k][0]=i;
                trip[k][1]=j;
                trip[k][2]=arr[i][j];
                k++;
            }
        }
    }
    for (int i=0;i<k;i++) {
        for (int j=0;j<3;j++) {
            cout<<trip[i][j]<<" ";
        }
        cout<<"\n";
    }
}