#include "iostream"
#include "string"


using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,r=0,g=0,b=0,size=0;
    cin>>n;
    string s;
    cin>>s;
    size= s.length();

    for(int i=0;i<size;i++)
    {

        if(s[i]=='R')
        r++;
        else
          if(s[i]=='G')
            g++;
        else
        b++;
    }
    if(r== size || g== size || b== size)
      cout<<0<<"\n";

    else if(r>=b && r>=g)
      cout<<(g+b)<<"\n";

    else if(g>=b && g>=r)
      cout<<(r+b)<<"\n";

    else
      cout<<(g+r)<<"\n";
    }
    return 0;
  }
