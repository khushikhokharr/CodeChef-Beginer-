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
  int change=0, digits[6];
  while(n)
    {
      int digit= n%10;
      digits[change]=digit;
      change++;
      n=n/10;

    }
    int sum=0;
  for(int i=0;i<=change;i++)
  {
    sum+=digits[i]* int(pow(10,change-(i+1)));
  
  }
  if(sum==temp)
  cout<<"wins"<<"\n";
  else
  cout<<"losses"<<"\n";
}
   return 0;

}
