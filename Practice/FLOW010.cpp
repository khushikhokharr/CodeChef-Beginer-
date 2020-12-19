#include "iostream"

using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  { char n;
    cin>>n;
    if (n== 'b' || n=='B')
    cout<<"BattleShip"<<"\n";
    else
     if(n== 'c' || n=='C')
     cout<<"Cruiser"<<"\n";
    else
      if(n== 'd' || n=='D')
      cout<<"Destroyer"<<"\n";
    else
      if(n== 'f' || n=='F')
      cout<<"Frigate"<<"\n";


}
     return 0;


}
