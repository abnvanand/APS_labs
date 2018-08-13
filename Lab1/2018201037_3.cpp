#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N,Q;
    cin>>N;
    int numbers[N];
    for(int i=0;i<N;i++) {
        cin>>numbers[i];
    }

    cin>>Q;
    int X;
    while(Q--) {
        set<int> myset;
        cin>>X;
        bool found = false;
        for(int i:numbers) {
            if(myset.find(i)==myset.end()) {
                myset.insert(X-i);
            }else{
                // Found
                cout<<"Yes"<<endl;
                found=true;
                break;
            }
        }
        if(!found) {
            cout<<"No"<<endl;
        }
    }

    return 0;
}

