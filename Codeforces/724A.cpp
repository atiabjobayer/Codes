#include <bits/stdc++.h>
using namespace std;

map< int, int > used;
vector< int > need;

vector< int > ara;

set< int > needDB;

bool checkNice(int k) {
    int nice = true;

    for (int i = 0; i < k; i++) {
        for (int j = i + 1; j < k; j++) {
            int diff = abs(ara[i] - ara[j]);

            if (used[diff] != 1) {
                need.push_back(diff);
                nice = false;
            }
        }
    }

    return nice;
}

int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        int k;

        cin >> k;

        for (int i = 0; i < k; i++) {
            int t;
            cin >> t;
            ara.push_back(t);

            used[ara.at(i)] = 1;
        }

        int checkCount = 0;

        while (!checkNice((int)ara.size())) {
            checkCount++;
            cout << "check " << checkCount << endl;

            if (checkCount > 301) {
                break;
            }

            for (int i = 0; i < need.size(); i++) {
                ara.push_back(need.at(i));
                used[need.at(i)] = 1;

                needDB.insert(need.at(i));
            }

            need.clear();
        }

        for (auto x : needDB) {
            cout << x << " ";
        }
        cout << endl;

        need.clear();
        needDB.clear();
        used.clear();
        ara.clear();
    }

    return 0;
}