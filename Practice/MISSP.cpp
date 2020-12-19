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
    int a[n];
    for (int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    int s= sizeof(a)/sizeof(a[0]);
    sort(a,a+s);
    for(int i=0;i<s;i++)
    {
      if(a[i]!=a[i+1])
      cout<<a[i]<<"\n";
      else
      i++;a
    }

  }
  return 0;
}
