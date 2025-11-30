#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main (int argc, char *argv[]) {
  vector<int> v;

  int c;

  cin >> c;

  if (c <= 0) {
    cout << "max product: " << 0;
    return 0;
  } 

  while (c--) {
    int n;

    cin >> n;

    v.push_back(n);
  }

  sort(v.begin(), v.end());

  int s = v.size();


  cout << "max product: " << v[s - 1] * v[s - 2];
  return 0;
}
