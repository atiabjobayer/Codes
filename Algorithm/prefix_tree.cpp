#include <bits/stdc++.h>
#define MAX 100000
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

void insert(char *str, int len) {
    node *curr = root;

    for (int i = 0; i < len; ++i) {
        int letter = str[i] - 'a';

        if (curr->next[letter] == NULL) {
            curr->next[letter] = new node();
        }

        curr = curr->next[letter];
    }

    curr->endmark = true;
}

bool search(char *str, int len) {
    node *curr = root;

    for (int i = 0; i < len; i++) {
        int letter = str[i] - 'a';

        if (curr->next[letter] == NULL) {
            return false;
        }

        curr = curr->next[letter];
    }
    return curr->endmark;
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
    cout << "Enter number of words" << endl;

    root = new node();

    int numWords = 0;
    cin >> numWords;

    for (int i = 1; i <= numWords; i++) {
        char str[50];

        scanf("%s", str);
        insert(str, strlen(str));
    }

    cout << "Enter number of query" << endl;

    int query = 0;
    cin >> query;

    for (int i = 1; i <= query; i++) {
        char str[50];

        scanf("%s", str);
        if (search(str, strlen(str))) {
            cout << "Found" << endl;
        }
        else {
            cout << "Not Found" << endl;
        }
    }

    del(root);

    return 0;
}