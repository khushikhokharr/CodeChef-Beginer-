#include "iostream"

using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int r; cin >> r;
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    if ((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2) <= r*r
    and (x1-x3)*(x1-x3) + (y1-y3)*(y1-y3) <= r*r)
    {
      cout << "yes";
    }
    else if ((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1) <= r*r
    and (x2-x3)*(x2-x3) + (y2-y3)*(y2-y3) <= r*r)
    {
      cout << "yes";
    }
    else if ((x3-x1)*(x3-x1) + (y3-y1)*(y3-y1) <= r*r
    and (x3-x2)*(x3-x2) + (y3-y2)*(y3-y2) <= r*r)
    {
      cout << "yes";
    }
    else cout << "no";
    cout << endl;
  }

  return 0;
}
