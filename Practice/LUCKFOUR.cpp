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
    int s=0;
    while(n)
      {
        int digit= n%10;
        n=n/10;
           if(digit==4)
           s++;
         }
        cout<<s<<"\n";
    }
     return 0;
  }
