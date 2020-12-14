#include "iostream"
#include "cmath"
 using namespace std;

  int main()
  {
     int t;
     cin>>t;
     while(t--)
     {
       long long int n;
       cin>>n;
       if(n==0)
        {
          cout<<0<<"\n";
          return 0;
        }
       int len=0;
       for(len=0;n/int(pow(10,len))!=0;len++)
       {
         // cout<<"This is len: "<<len<<endl;
       }
       if(len==1)
        cout<< n<<"\n";
        else
        cout<< (n%10) + n/ int(pow(10,len-1))<<"\n";

  }
  return 1;
}
