#include "iostream"
#include "cmath"

using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,sq=0,count=0;
    cin>>n;
    while(n)
    {
      sq= sqrt(n);
      count++;
      n=(n-(sq*sq)) ;

    }
    cout<<count<<"\n";
  }
  return 0;
}
