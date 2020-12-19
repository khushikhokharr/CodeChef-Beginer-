#include "iostream"

using namespace std;

int hcf(int a, int b)
{
  if (b==0)
  return a;
  return hcf(b,a%b);

}
int main()
{
  int t;
  cin>>t;
  while (t--)
  {
    int a,b,
    long long int p=0;
    cin>>a>>b;
    p= a*b;
    cout<<hcf(a,b)<<" "<<p/hcf(a,b)<<endl;
  }
  return 0;
}
