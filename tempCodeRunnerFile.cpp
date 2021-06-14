#include <bits/stdc++.h>
#define MAX 10010
#define PI acos(-1)
#define pb(x) push_back(x)
#define pii pair< int, int >
#define read(x) freopen("in.txt", "r", stdin)
#define write() freopen("out.txt", "w", stdout)

using namespace std;
typedef long long int lli;

struct node {
    bool endmark;
    node *next[26 + 1];
    node() {
        endmark = false;
        for (int i = 0; i < 26; ++i) {
            next[i] = NULL;
        }
    }
} * root;

vector< string > nums;

void insert(string str) {
    node *curr = root;

    for (int i = 0; i < str.size(); i++) {
        int letter = str.at(i) - '0';

        if (curr->next[letter] == NULL) {
            curr->next[letter] = new node();
        }

        curr = curr->next[letter];
    }

    curr->endmark = true;
}

bool chceckConsistent(string str) {
    node *curr = root;

    for (int i = 0; i < str.size(); i++) {
        int letter = str.at(i) - '0';

        if (curr->endmark) {
            // cout << "broke at (" << i << ") in " << str << endl;
            return false;
        }

        curr = curr->next[letter];
    }

    return true;
}

void del(node *curr) {
    for (int i = 0; i < 26; i++) {
        if (curr->next[i]) {
            del(curr->next[i]);
        }
    }

    delete (curr);
}

int main() {
    read();
    // write();

    int tc;
    cin >> tc;

    while (tc--) {
        root = new node();

        int numWords = 0;
        cin >> numWords;

        bool consistent = true;

        for (int i = 0; i < numWords; i++) {
            string str;
            cin >> str;

            insert(str);

            nums.pb(str);
        }

        for (int i = 0; i < numWords; i++) {
            string x = nums.at(i);

            if (!chceckConsistent(x)) {
                consistent = false;
                break;
            }
        }

        if (consistent) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }

        del(root);
        nums.clear();
    }

    return 0;
}