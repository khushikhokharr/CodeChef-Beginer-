#include "iostream"
#include "string"

using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    char s[100];
    for(int i=0;i<100;i++)
    cin>>s[i];
    int a=0,b=0;
    for(int i=0;i< strlen(s);i++)
    {
      if(s[i]==97)
      a++;
      else
      b++;
    }
    if(a>b)
    cout<<b<<"\n";
    else
    cout<<a<<"\n";
  }
  return 0;
}
