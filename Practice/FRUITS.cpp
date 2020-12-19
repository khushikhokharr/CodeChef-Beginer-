#include "iostream"

using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, m, k;
    cin >> n >> m >> k;

    for (int i=0; i<k; i++)
    {
      if (n == m)
        break;
      if (n > m)
        m++;
      else
        n++;
    }

    cout << abs(n-m) << endl;
  }

  return 0;
}
