#include <iostream>
using namespace std;

int main() {
    int T; cin >> T;
    for (int cas = 1, x, y; cas <= T; cas++) {
        cin >> x >> y;
        if (x % 2 && y % 2) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}
