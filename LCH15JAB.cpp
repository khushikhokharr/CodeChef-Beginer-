#include "iostream"
#include "algorithm"

using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    string s;
    cin>>s;
    int a[27];
    for(int i=0;i<27;i++)
    {
      a[i]=0;
    }
    for(int i=0;i<s.length();i++)
    {
      a[(int(s[i]))-97]++;
    }
    int n= sizeof(a)/sizeof(a[0]);
     sort(a,a+n);

    int sum=0;

     for(int i=0;i<26;i++)
     {
       sum+=a[i];
     }
    if(sum==a[26])
    cout<<"YES\n";
    else
    cout<<"NO\n";
  }
  return 0;
}
