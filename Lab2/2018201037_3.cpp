#include <cmath>
#include <cstdio>
#include <unordered_map>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    unordered_map<string,long> m;

    long N;
    cin >>N;
    string s;
    while(N--) {
        cin>>s;
        sort(s.begin(),s.end());
        auto it = m.find(s);
        if(it == m.end()) {
            m.insert(make_pair(s,1));
        }
        else {
            m[s] += 1;
        }
    }

    long max_num=0;
    for(auto i: m) {
        max_num=max(max_num,i.second);
    }
    cout<<max_num<<'\n';

    return 0;
}
