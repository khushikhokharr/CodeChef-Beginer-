#include "iostream"

using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int a,b;
    cin>>a>>b;
    if(a>b)
    cout<<a<<" "<<(a+b)<<"\n";
    else
    cout<<b<<" "<<(a+b)<<"\n";
  }

  return 0;
}
