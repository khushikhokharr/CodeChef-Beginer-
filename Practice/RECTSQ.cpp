#include "iostream"
#include "string"

using namespace std;

int hcf(int a, int b)
{
  if(b==0)
  return a;
  return hcf(b,a%b);
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,m,a=0;
    cin>>n>>m;
    cout<<n/(hcf(n,m))*m/(hcf(n,m))<<"\n";
  }
  return 0;
}
