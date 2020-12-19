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
    int a[n];
    for(int i=0;i<n;i++)
      cin>>a[i];    
    int b[100];
    for(int i=0;i<100;i++)
    {
      b[i]=0;
    }
    for(int i=0;i<n;i++)
      b[a[i]]=1;
    int count=0;
    for(int i=0;i<100;i++)
    {
      if(b[i]==1)
      count++;
    }
    cout<<count<<"\n";
  }
  return 0;
}
