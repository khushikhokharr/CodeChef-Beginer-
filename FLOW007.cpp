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
  int change=0, digits[15];
  while(n)
    {
      int digit= n%10;
      digits[change]=digit;
      change++;
      n=n/10;
    }
    bool flag = false;
    for(int i=0;i<change;i++){
      if(digits[i]==0 && flag==false)
        continue;
      else
        if(digits[i]!=0)
          flag = true;
      cout<<digits[i];
    }
cout<<"\n";
}
return 0;
}
