#include "iostream"
#include <iomanip>

using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    cout<<std::fixed;
    int s;
    cin>>s;
    if(s<1500)
    cout<<s*2<<endl;
    else
    cout<<setprecision(2)<<double(double(s)+500+(double(s)*0.98))<<endl;
  }
  return 0;
}
