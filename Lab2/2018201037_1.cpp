#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    string bin_str;
    cin>>N;
    while(N--) {
        bool found=false;
        cin>>bin_str;
        for(int i=0;i<bin_str.length();i++) {
            if(bin_str[i]=='1') {
                cout<<i<<" ";
                found = true;
                break;
            }
        }
        if(!found)
            cout<<"-1 ";
    }
    return 0;
}

