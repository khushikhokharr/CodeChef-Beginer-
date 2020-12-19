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
    int a[n],sum1=0,sum2=0,count=0;
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
      if(a[i]>7)
        count++;
    }
    if(count>0)
    {
    cout<<"no\n";
    continue;
    }

    int flag=0;
    for(int i=0;i<n/2;i++)
    {
      if(a[i]!=a[n-i-1])
      {
        flag++;
        break;
      }
    }

      if(flag)
      {
        cout<<"no\n";
      }
      else
      {
          int b[8]={0,0,0,0,0,0,0,0};
          b[0]=1;
        for(int i=0;i<n/2;i++)
        {
          b[a[i]]=1;
        }

    int noo=0;
    for(int i=0;i<8;i++)
    {
      if(b[i]==0)
      noo++;
    }
      if(noo)
      cout<<"no\n";
      else
      cout<<"yes\n";
    }
  }
    return 0;
  }
