#include "iostream"

using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int x,y,sum=0;
    cin>>x>>y;
    sum= x+y;
    if(sum==2)
      cout<<1<<"\n";


      for (int i = 2; i <(sum+numb); i++)
        {
           if((sum+numb)%i==0)
             numb++;
          else
             break;
        }
    cout<<numb<<"\";
  }
  return 0;
}
