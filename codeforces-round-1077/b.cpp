#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int T; cin >> T;
    for (int cas = 1; cas <= T; ++cas) {
        int n; cin >> n;
        string seats; cin >> seats;
        int mintot = 0, z = 0;
        for (int i = 0; i < seats.size(); i++) {
            if (seats[i] == '1') {
                if (mintot == 0) {
                    mintot += ceil(float(z - 1) / 3);
                } else {
                    mintot += z / 3;
                }

                z = 0;
                mintot++;
            } else {
                z++;
            }
        }
        if (z != 0) {
            if (mintot != 0) mintot += ceil(float(z - 1) / 3);
            else mintot += ceil(float(z) / 3);
        }

        cout << mintot << endl;
    }
    return 0;
}
