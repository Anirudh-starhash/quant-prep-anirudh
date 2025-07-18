#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

    // given an sorted array of integers and the value of k
    // Find the number of pairs (i,j) such that i < j and arr[i] - arr[j] = k

    int n,k;
    cout << "Enter the size of the array and the value of k: ";
    cin >> n >> k;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int count = 0;

    // Try to solve in O(n) time complexity
    int i=0,j=1;

    // 1,4,7,10,13  True (10-4) and (7-1) and (13-7)
    // 1,4,7,9,13   True (13-7) and (7-1)
    // 1,4,7,13     True (13-7) and (7-1)
    // 1,4,7,9      True (7-1)

    while(i<j and j<n){
        int diff=arr[j]-arr[i];

        if(diff<k){
            j++;
        }
        else if(diff==k){
            cout<<arr[i]<<","<<arr[j]<<endl;
            i++;
            count++;
            
        }
        else{
            i++;
        }
    }
    cout << "Number of pairs with difference " << k << ": " << count << endl;
    return 0;

}
