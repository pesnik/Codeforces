#include <iostream>
using namespace std;

int main() {
	int T; cin >> T;
	for (int i = 1, x; i <= T; i++) {
		cin >> x;
		if (x == 67) cout << 67 << endl;
		else cout << x + 1 << endl;
	}
	return 0;
}
