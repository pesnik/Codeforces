#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int T; cin >> T;
    for (int cas = 1, len; cas <= T; ++cas) {
        string bracs;
        cin >> len; cin >> bracs;
        int lbracs = count(bracs.begin(), bracs.end(), '(');
        int rbracs = count(bracs.begin(), bracs.end(), ')');
        if (lbracs != rbracs) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}
