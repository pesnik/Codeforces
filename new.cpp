#include<bits/stdc++.h>
using namespace std;
int dp[1<<21];
int fib(int a, int b) {
  if (dp[a] != -1) return dp[a];
  if (a == 0) return 0 % b;
  else if (a == 1) return 1 % b;
  return dp[a] = ((fib(a - 2, b) % b + fib(a - 1, b) % b) % b);
}
inline int mod(int a, int b) {
  return fib(a, b);
}
void solve(int n, int m) {
  memset(dp, -1, sizeof dp);
  function<int(int, int)> _pow = [&](int a, int b) {    
    int ret = 1;
    while (b > 0) {
      if (b & 1) {
        ret = ret * a;
      }
      a = a * a;
      b >>= 1;
    }
    return ret;
  };
  int p = _pow(2, m);
  cout << mod(n, p) << "\n"; 
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n, m;
  while (cin >> n >> m) {
    solve(n, m);
  }
  return 0;
}