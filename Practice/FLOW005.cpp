#include "iostream"
#include "cmath"

using namespace std;

int main()
{
  int t;
  cin>>t;
  int a[6]= {1,2,5,10,50,100};
  while(t--)
   {int n,x,y=0,temp=0;
    cin>>n;
    while(n)
  {
    for(int i=5;i>=0;i--)
      {
      if(a[i]<=n)
      {
          x=n%a[i];
          temp=a[i];
          break;
      }
    }
      y+=n/temp;
      n=x;
    }
  cout<<y<<"\n";
}
return 0;
}
