#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T; cin >> T;
    for (int cas = 1, n; cas <= T; ++cas) {
        cin >> n;
        vector<int> S(n), R, L, F, P;
        for (auto &it : S) cin >> it;
        for (int i = 0; i < n; ++i) {
            if (S[i] % 6 == 0) {
                L.push_back(S[i]);
            } else if (S[i] % 3 == 0 and S[i] % 2) {
                F.push_back(S[i]);
            } else if (S[i] % 2 == 0 and S[i] % 3) {
                P.push_back(S[i]);
            } else {
                R.push_back(S[i]);
            }
        }
        for (auto it : L) cout << it << " ";
        for (auto it : P) cout << it << " ";
        for (auto it : R) cout << it << " ";
        for (auto it : F) cout << it << " ";
        cout << endl;
    }
    return 0;
}
