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
    for (int i=0;i<n;i++)
      cin>>a[i];
      if(n==2)
      cout<<a[0]+a[1]<<endl;
      else
  {  int temp=0,temp2=0,pos=0;
    temp=a[0];
    for (int i=1;i<n;i++)
    {
      if(temp > a[i])
      {
        temp = a[i];
        pos = i;
      }
    }
    temp2=a[0];
    for (int i=1;i<n;i++)
    {
      if(i!=pos)
      {
        if(temp2>a[i])
          temp2= a[i];
      }
    }
      cout<<temp+temp2<<"\n";

  }}
  return 0;
}
