#include <bits/stdc++.h>

using namespace std;

#define deb(x) cout << #x << " = " << x << '\n'
#define ll long long
#define PI 3.1415926535897932384626

void crap();

int main() {
  crap();

  ll n, k;
  cin >> n >> k;
  if (k <= (n + 1) / 2) {
    cout << 2 * k - 1;
  } else {
    cout << 2 * (k - (n + 1) / 2);
  }
  return 0;
}

void crap() {
  ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
}