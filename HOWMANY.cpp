#include "iostream"

using namespace std;

int main()
{
  int n;
  cin>>n;
  int count=1;
  while(n/10)
  {
    n=n/10;
    count++;
  }
  if(count==1 || count==2 || count==3)
  cout<<count;
  else
  cout<<"More than 3 digits\n";

}
