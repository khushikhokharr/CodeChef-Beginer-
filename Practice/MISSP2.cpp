#include "iostream"
#include "algorithm"

using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int a[n],s[n];
    for (int i=1;i<=n;i++)
    {
      cin>>a[i];
      s[a[i]]++;
    }
    for(int i=1;i<=sizeof(s);i++)
    {
      if(s[i]%2!=0)
      {
        cout<<i<<"\n";
        break;
      }
    }
  }
  return 0;
}
