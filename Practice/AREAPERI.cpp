#include "iostream"


using namespace std;

int main()
{
  int l,b,area=0,peri=0;
  cin>>l>>b;
  area=(l*b);
  peri=2*(l+b);
  if(area>peri)
  cout<<area<<"\n"<<"Area\n";
  else
    if(peri>area)
     cout<<peri<<"\n"<<"Peri\n";
  else
  cout<<area<<"\n"<<"Eq\n";
}
