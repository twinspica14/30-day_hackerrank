#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <string>
using namespace std;

map<string,int> dict;
vector<string> lol;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n = 0, no = 0;
    string name,ol;
    cin>>n;
    for(int i=0; i<n;i++){
        cin>>name;
        cin>>no;
        if(dict.count(ol)==0){
        dict[name] = no;
        }
    }
    
    
   
    
  /*  int j =0;
    for(j=0;j<n;j++){
        cin>>ol;
        lol.push_back(ol);
    }
    for(j=0;j<n;j++){
        
        if(dict.count(lol[j]) > 0){
            cout<<lol[j]<<"="<<dict.at(lol[j])<<endl;
        }
        else{
            cout<<"Not found"<<endl;
        }
    } */
    while(cin>>ol){
        if(dict.count(ol) > 0){
            cout<<ol<<"="<<dict.at(ol)<<endl;
        }
        else{
            cout<<"Not found"<<endl;
        }
    }
    return 0;
}
