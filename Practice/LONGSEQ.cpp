#include "iostream"
#include "string"

using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    string D;
    cin>>D;
    int one=0,zero=0;
    for(int i=0;i<D.length();i++)
    {
      if(D[i]=='0')
      {
        zero++;
      }
      else
      {
        one++;
      }

    }
    if(zero+one==1)

    else
    if(zero==1 || one==1)
    cout<<"yes\n";

    else
    cout<<"no\n";

  }
  return 0;
}
