#include "iostream"

using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    float p,q;
    cin>>p>>q;
    if(q>1000)
    p= p*0.9;
    cout<<p<<endl;

  }
}
