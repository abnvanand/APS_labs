#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long n;
    long long temp;
    cin>>n;

    long long s[n];
    long long output[n];
    for(long i=0;i<n;i++) {
        cin>>temp;
        s[i] =temp;
    }

    long long max = 0;
    for(long i=n-1;i>=0;i--) {
        if(s[i]>max) {
            output[i] = 1;
            max = s[i];
        }
        else{
            output[i] = 0;
        }
    }

    for(long i=0;i<n;i++) {
        cout<<output[i]<<" ";
    }

    return 0;
}

