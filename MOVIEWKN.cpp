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
    int l[n];
    int r[n];
    int w[n];
    for(int i=0;i<n;i++)
      cin>>l[i];
    for(int i=0;i<n;i++)
      {
        cin>>r[i];
        w[i]=(l[i]*r[i]);
        // cout<<w[i]<<" ** ";
      }

    int temp=0;
    for(int i=1;i<n;i++)
    {
      if(w[temp]<w[i])
      {
        temp=i;
      }
      else
      {
          if(w[temp] == w[i])
        {
          if(r[i]>r[temp])
          temp=i;
          else
          {
            if(r[i]==r[temp])
            {
              if(i<temp)
              temp=i;
            }
          }
        }
      }
     }
      cout<<(temp+1)<<"\n";
    }
    return 0;
  }
