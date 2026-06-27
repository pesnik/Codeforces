#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int T; cin >> T;
    for (int cas = 1, n; cas <= T; cas++) {
        cin >> n;
        vector <int> vi(n);
        for (int i = 0, h; i < n; i++) {
            cin >> h;
            vi[i] = h;
        }

        sort(vi.begin(), vi.end());
        cout << vi[n - 1] - vi[0] + 1 << endl;
    }
}
