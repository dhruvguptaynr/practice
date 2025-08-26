#include <iostream>
using namespace std;

// Function to perform binary search on a sorted array
int binarySearch(int arr[], int x, int low, int high) {
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==x) return mid;
        else if(arr[mid]>x) high=mid-1;
        else low=mid+1;
    }
    return -1;
}

int main(void) {
    int n;
    cin >> n;
    int arr[n];

    // Input the array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cin >> target;

    // Perform binary search on the array
    int result = binarySearch(arr, target, 0, n - 1);

    // Print the result
    if (result == -1)
        cout << -1;
    else
        cout << result;

    return 0;
}