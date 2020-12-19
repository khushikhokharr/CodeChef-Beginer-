#include "iostream"
#include "string"


using namespace std;

int main()
{
  string s;
  cin>>s;
  int a[26];
  for(int i=0;i<26;i++)
  {
    a[i]=0;
  }

  for(int i=0;i<s.length();i++)
  {
    a[int(s[i])-97]=1;
  }
  int n,count=0;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    string l;
    cin>>l;
    for(int j=0;j<l.length();j++)
    {
      if(a[int(l[j])-97]==0)
      count++;
    }
    if(count>0)
    cout<<"No\n";
    else
    cout<<"Yes\n";
  }
  return 0;
}
