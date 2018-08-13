#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long n;
    cin>>n;
    long arr[n];
    for(long i=0;i<n;i++) {
        cin>>arr[i];
    }
    // Insertion sort
    long swaps = 0;
    long i=0;
    while(i<n) {
        if(arr[i] != arr[arr[i]]) {
            int temp = arr[arr[i]];
            arr[arr[i]] = arr[i];
            arr[i] = temp;
            swaps++;
        }
        else{
            i++;
        }

    }
    cout<<swaps<<endl;

    return 0;
}

