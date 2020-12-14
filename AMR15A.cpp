#include "iostream"

using namespace std;

int main()
{
  int t,e=0,o=0;
  cin>>t;
  int s[t];
  for(int i=0;i<t;i++)
  {
    cin>>s[i];
  if(s[i]%2==0)
  e++;
  else
  o++;
  }
  if(e>o)
  cout<<"READY FOR BATTLE"<<"\n";
  else
  cout<<"NOT READY"<<"\n";
  return 0;
}
