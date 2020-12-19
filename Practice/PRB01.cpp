#include "iostream"

using namespace std;

int main()
{
  int t;
  cin>>t;

 int sieve[100002];

 for(int i=0;i<100002;i++)
  sieve[i]=1;

 for(int i=2;i*i<100002;i++)
 {

   if(sieve[i]==1)
    {
      for(int j=(i*i);j<=100002 ; j+=i)
        sieve[j]=0;
    }

 }

sieve[1]=0;


  while(t--)
  {
    int n;
    cin>>n;
    if(sieve[n]==1)
      cout<<"yes\n";
    else
      cout<<"no\n";

}
  return 0;
}
