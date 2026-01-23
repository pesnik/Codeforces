#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main() {
    int T; cin >> T;
    for (int cas = 1; cas <= T; cas++) {
        int n; cin >> n;
        vector<int> cards, sorted_cards;
        for (int i = 0, card; i < n; i++) {
            cin >> card; cards.push_back(card); sorted_cards.push_back(card);
        }
        sort(sorted_cards.begin(), sorted_cards.end());
        bool possible = true;
        for (int i = 1; i < n; i++) {
            int adj1 = cards[i - 1];
            int adj2 = cards[i];

            auto adj1_sorted_pos = find(sorted_cards.begin(), sorted_cards.end(), adj1);
            auto adj2_sorted_pos = find(sorted_cards.begin(), sorted_cards.end(), adj2);
            if (distance(sorted_cards.begin(), adj1_sorted_pos) % 2 == distance(sorted_cards.begin(), adj2_sorted_pos) % 2) {
                possible = false;
                break;
            }
        }
        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
	return 0;
}
