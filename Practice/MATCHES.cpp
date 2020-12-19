#include "iostream"


using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int a,b,sum=0,count=0,dig=0;
    cin>>a>>b;
    sum=(a+b);
    int m[10]= {6,2,5,5,4,5,6,3,7,6}
    while(sum)
    {
      dig=sum%10;
      count+=m[dig];
      sum=sum/10;
    }
    cout<<count<<"\n";
  }
