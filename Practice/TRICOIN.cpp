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
    int h=1;
    while(h*(h+1)<=2*n)
    {
      h++;
    }
    cout<<h-1;

  }
  return 0;
}
