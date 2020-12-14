#include "iostream"

using namespace std;

int main()
{
  while(1)
   {
      int n;
      cin>>n;
      if(n==0)
        break;
      int a[n+1],inv[n+1];

      for (int i=1; i<=n; i++)
      {
        cin>>a[i];
        inv[a[i]] = i ;
      }
      int flag=0;
      for (int i=1; i<=n; i++)
         {
           // cout<< inv[i]<<"\t";
           if(a[i]!=inv[i])
            {flag++; break;}
         }
      if(flag!=0)
        cout<<"not ambiguous\n";
      else
        cout<<"ambiguous\n";
      }

  return 0;
}
