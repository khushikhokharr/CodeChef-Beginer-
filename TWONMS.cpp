#include "iostream"


using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    long long int a,b,c=0,d=0;
    cin>>a>>b>>n;
    while(n--)
    {
      if(n%2==0)
      b*=2;
      else
      a*=2;
    }
  
    c=b;
    d=a;
    if(c>d)
    cout<<c/d<<"\n";
    else
    cout<<d/c<<"\n";
  }
return 0;
}
