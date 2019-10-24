//11340 - Newspaper

#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t,k,m;
    cin>>t;
    while(t--){
        cin>>k;
        unsigned char key;
        long long value;
        unordered_map<unsigned char,long long> mapaone;
        while(k--){
            cin>>key>>value;
            mapaone[key]=value;
        }
        cin>>m;
        cin.ignore();
        string linea;
        long long sum=0;
        while(m--){
            getline(cin,linea);
            for(auto i:linea){
                if(mapaone.find(i)!=mapaone.end()){
                    sum+=mapaone[i];
                }
            }
        }
        printf("%.2f$\n",sum/100.0);
    }
}