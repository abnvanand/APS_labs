#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long T,R,S;
    cin>>T;
    while(T--) {
        cin >> R >> S;
        long ramesh[R];
        long suresh[S];
        for(long i=0;i<R;i++) {
            cin>>ramesh[i];
        }
        for(long i=0;i<S;i++) {
            cin>>suresh[i];
        }

        long r=0,s=0,k;
        long count=0,bomb=-1;

        cin>>k;

        while(r<R && s <S) {
            if(ramesh[r]<=suresh[s]) {
                bomb = ramesh[r];
                r++;
            }
            else{
                bomb = suresh[s];
                s++;
            }
            count++;
            if(count==k) {
                cout<<bomb<<endl;
            }
        }
        while(r<R) {
            bomb = ramesh[r];
            r++;
            count++;
            if(count==k) {
                cout<<bomb<<endl;
            }
        }
        while(s<S) {
            bomb = suresh[s];
            s++;
            count++;
            if(count==k) {
                cout<<bomb<<endl;
            }
        }

    }
    return 0;
}

