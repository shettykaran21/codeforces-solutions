#include <bits/stdc++.h>

using namespace std;

#define deb(x) cout << #x << " = " << x << '\n'
#define ll long long
#define PI 3.1415926535897932384626

void crap();

int main() {
  crap();

  int n, m;
  cin >> n >> m;

  if (min(n, m) % 2 == 0) {
    cout << "Malvika";
  } else {
    cout << "Akshat";
  }

  return 0;
}

void crap() {
  ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
}