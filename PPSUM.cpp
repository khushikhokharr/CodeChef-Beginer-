#include "iostream"

using namespace std;
int answer(int d,int n)
{
  if (d==0)
  return n;

  return answer(d--,(n*(n+1))/2)

}

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int d,n,;
    cin>>d>>n;
     cout<<answer(d,n)<<endl;
}
  
  return 0;
}
