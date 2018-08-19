#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long min_cost(long n) {
    if (n == 0)
        return 0;

    if(n & 1) { // n is odd
        return min_cost(n-1) + 1;
    }else {
        return min_cost(n/2);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int T;
    cin>>T;
    long n;
    while(T--) {
        cin>>n;
        cout<<min_cost(n)<<endl;
    }
    return 0;
}

