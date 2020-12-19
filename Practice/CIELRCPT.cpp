#include "iostream"
#include "cmath"

using namespace std;

int main()
{
  int t;
  cin>>t;
  int a[12];
   a[0]=1;
  for (int i=1;i<12;i++)
     a[i]= int(pow(2,i));
    while(t--)
     {int n,x,y=0,temp=0;
      cin>>n;

      while(n)
    {
      for(int i=11;i>=0;i--)
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
        // cout<<y<<endl;
      }
      cout<<y<<endl;
    }


  return 0;
}
