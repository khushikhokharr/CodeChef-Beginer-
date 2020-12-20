#include "iostream"
#include "algorithm"


using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,b;
    cin>>n>>b;
    int h[n];
    int w[n];
    int p[n];
    int t[n];
    for(int i=0;i<n;i++)
    {
      cin>>w[i];
      cin>>h[i];
      cin>>p[i];
      if(p[i]>b)
      {
        h[i]=0;
        w[i]=0;
      }
    }
    for(int i=0;i<n;i++)
    {
      t[i]=(w[i]*h[i]);
    }
    int s= sizeof(t)/sizeof(t[0]);
    sort(t,t+s);
    if(t[n-1]==0)
      cout<<"no tablet\n";
    else
      cout<<t[n-1]<<"\n";
    }
    return 0;
  }
