#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T; cin >> T;
	for (int cas = 1; cas <= T; cas++) {
		int n; cin >> n;
		vector <int> v;
		if (n % 2 == 1) cout << n / 2 + 1 << " ";
		for (int i = 1; i <= n / 2; i++) {
			v.push_back(n - i + 1);
			v.push_back(i);
		}
		for (int i = v.size() - 1; i >= 0; i--) {
			cout << v[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
