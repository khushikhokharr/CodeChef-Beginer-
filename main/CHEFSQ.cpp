#include "iostream"


using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
      cin>>a[i];

    int m;
    cin>>m;
    int b[m];
    for (int i=0;i<m;i++)
    {
      cin>>b[i];
    }
    int j=0;
    for (int i=0;i<n;i++)
      {
        if(b[j]==a[i])
        j++;
        if(j==m)
        break;
      }

      if(j==m)
      cout<<"Yes\n";
      else
      cout<<"No\n";
  }
  return 0;
}
