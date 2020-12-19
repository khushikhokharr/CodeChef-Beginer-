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
    int a[n+1];
    a[0]=0;
    int sum=0;
    for(int i=1;i<=n;i++)
    {
      cin>>a[i];
    }
      for(int i=1;i<=n;i++)
      {
          int b;
          cin>>b;
          if(b<= (a[i]-a[i-1]))
          sum++;
      }
    cout<<sum<<"\n";
  }
  return 0;
}
