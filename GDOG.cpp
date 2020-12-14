#include "iostream"

using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,k;
    cin>>n>>k;
    for (int i = 1; i <= k; i++)
    {
            if (n % i > ans)
           {
                ans = n % i;
            }
    }
        cout << ans << "\n";
    }
    return 0;
}
