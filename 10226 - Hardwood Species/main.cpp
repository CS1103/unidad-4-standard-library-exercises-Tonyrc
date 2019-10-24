//10226 - Hardwood Species

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <iomanip>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin>>t;
  cin.ignore();
  cin.ignore();
  string pal;
  while(t--){
     map<string,float> mapa;
     while(getline(cin,pal),pal!=""){
         mapa[pal]+=1;
     }
     float suma=0;
     for(auto i:mapa)
         suma+=i.second;
     for(auto i:mapa){
        float a=(i.second/suma)*100;
        string b=i.first;
        cout<<i.first<<" "<<fixed<<setprecision(4)<<a<<"\n";     
      }
      if(t)
        cout<<"\n";
  }
}
