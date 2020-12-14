#include "iostream"

using namespace std;

  int main()
   {
     int t;
     cin>>t;
     while(t--)
     { int n,a[200],m=1;
       cin>>n;
       a[0]=1;
       for(int i=2;i<=n;i++){
       int temp=0,x;
        for(int j=0;j<m;j++){
           x = a[j]*(i) + temp;
           a[j]= x%10;
           temp= x/10;
         }
           while(temp)
           {
             a[m]= temp%10;
             temp=temp/10;
             m++;
           }
       }
       for(int i=m-1;i>=0;i--)
        cout<<a[i];
       cout<<endl;
     }

     return 0;
   }
