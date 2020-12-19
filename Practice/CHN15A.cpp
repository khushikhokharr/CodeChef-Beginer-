#include "iostream"
#include "string"

using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,k,sum=0;
    cin>>n>>k;
    while(n--)
    {
      int a;
      cin>>a;
      if((a+k)%7==0)
        sum++;
    }
    cout<<sum<<endl;
  }
  return 0;
  }
