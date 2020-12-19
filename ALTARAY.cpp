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
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
      int sum=1;
      while((i+1)!=n &&  a[i]*a[i+1]<0)
      {
        i++;
        sum++;
      }
      while(sum--)
      {
        cout<<sum;
      }

    }

  }
  return 0;
}
