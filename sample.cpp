#include "iostream"
#include "cmath"

using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
{
  int n,temp;
  cin>>n;
  temp=n;
  int change=0, sum=0;
  while(n)
    {
      int digit= n%10;
      change++;
      n=n/10;
    }
      sum+=digit* int(pow(10,change-1)));
  if(sum==temp)
  cout<<"wins"<<"\n";
  else
  cout<<"losses"<<"\n";
  return 0;
}
}
