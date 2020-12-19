#include "iostream"


using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int a,b;
    cin>>a>>b;
    int i=1,flag=1;
    while(flag)
    {
      if(i%2==0)
    {
      b-=i;
      if(b<=0)
      {
          cout<<"Limak\n";
      }
      else
      i++;
    }
    else
    {
      a-=i;
      if(a<=0)
      {
        cout<<"Bob\n";
      }
      else
      i++;
    }
    if(a<= 0 || b<=0)
    flag--;
    }
   }
  return 0;
}
