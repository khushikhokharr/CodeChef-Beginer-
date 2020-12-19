#include "iostream"

using namespace std;

int main()
 {
   int t;
   cin>>t;
   while(t--)
   { long long int n;
     cin>>n;
     if(n==0)
     cout<<1<<"\n";
     else
     {long long int prod=1;
     for (int i=1;i<n;i++)
     prod*=i;
     cout<< n*prod<<"\n";
   }}
}
