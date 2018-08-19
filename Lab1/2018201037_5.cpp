#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


void fill_interest(vector<long long> &interest_list, long long num) {
    if (num > 7777777777)
        return;

    if (num != 0)
        interest_list.push_back(num);

    fill_interest(interest_list, num * 10 + 4);
    fill_interest(interest_list, num * 10 + 7);
}


int main() {
    vector<long long> interest_list;

    fill_interest(interest_list, 0);

    std::sort(interest_list.begin(), interest_list.end());

    long T;
    long long l, r;
    cin >> T;
    while (T--) {
        auto it = interest_list.begin();

        cin >> l >> r;
        long long sum = 0;

        while (l <= r && it != interest_list.end()) {
            if (*it >= l) {
                if (r < (*it)) {
                    sum += (r - l + 1) * (*it);
                    l = (*it) + 1;
                    break;
                }
                sum += (*it - l + 1) * (*it);
                l = (*it) + 1;
                it++;
            } else {
                it++;
            }
        }
        cout << sum << endl;
    }
    return 0;
}

