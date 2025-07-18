#include<iostream>
#include<bits/stdc++.h>

using namespace std;
using namespace chrono;

int main(){

    long long n=1e7;
    
    vector<int> v(n,0);
    int *arr = new int[n]();

    // Measure time for vector
    int sum=0;
    auto start=high_resolution_clock::now();
    for(int i=0;i<n;i++){
        sum+=v[i];
    }
    auto end=high_resolution_clock::now();
    auto duration_vector = duration_cast<microseconds>(end - start);
    cout << "Time taken for vector: " << duration_vector.count() << " microseconds" << endl;

    // Measure time for array
    sum=0;
    start=high_resolution_clock::now();
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    end=high_resolution_clock::now();
    auto duration_array = duration_cast<microseconds>(end - start);
    cout << "Time taken for array: " << duration_array.count() << " microseconds" << endl;

    delete[] arr; // Free dynamically allocated memory
}