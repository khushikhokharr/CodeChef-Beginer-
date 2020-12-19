#include "iostream"

using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int a,b,c,d,p1=0,p2=0;
    cin>>a>>b>>c>>d;
    p1=a+b;
    p2=c+d;
    if(p1==p2)
      cout<<"YES\n";
    else
      if(a==b && c==d)
        cout<<"YES\n";

    else
      cout<<"NO\n";
  }
  return 0;
}
