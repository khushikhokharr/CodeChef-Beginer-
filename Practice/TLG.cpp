#include "iostream"
#include "cmath"
using namespace std;

int main()
{
  int t;
  cin>>t;
  int temp = t;

  int p1[t],p2[t];
  int change=0;
  int s1new=0,s2new=0;
  while(t--)
  {
    int s1,s2,cs;
    cin>>s1>>s2;
    cs= ((s1+s1new)-(s2+s2new));
    if(cs<0)
      p2[change]=2;
    else
      p2[change]=1;
    p1[change]=abs(cs);
    change++;
    s1new+= s1;
    s2new+= s2;
}
  int max,player;
  max=p1[0];
  player=p2[0];
  for(int i=1;i<temp;i++){
    // cout<<p1[i]<<":";
   if(p1[i]>max){
    max=p1[i];
    player=p2[i];
  }
}
cout<<player<<" "<<max;

return 0;

}
