#include "iostream"

#include <cmath>


using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int len = 0;
    while (n / pow(10, len)) {
      len++;
    }
    int sum = n % 10, prevDigit = n % 10;

    for (int i = 2; i <= len; i++) {
      int number = n%(int(pow(10,i)));
      int current = (number - prevDigit) / pow(10, i - 1);
      prevDigit = number;
      sum += current;
    }
    cout << sum << "\n";
  }
}
