#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int T; cin >> T;
	for (int cas = 1; cas <= T; cas++) {
		vector <int> v(7);
		for (int i = 0; i < 7; i++) {
			cin >> v[i];
		}
		
		sort(v.begin(), v.end());
		int sum = 0;
		for (int i = 0; i < 6; i++) {
			sum -= v[i];
		}
		cout << v[6] + sum << endl;
	}
	return 0;
}
