#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main() {
    string palabra;
    while(cin>>palabra,palabra!="#"){
        bool valor;
        valor=next_permutation(palabra.begin(),palabra.end());
        if(valor)
            cout<<palabra<<"\n";
        else
            cout<<"No Successor\n";
    }
}