#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int N;
    cin >> N;
    int i = 0;
    if(i != N%2 ){
        cout<<"Weird"<<endl;
    }
    else if(i == N%2 && N>2 && N<5){
        cout<<"Not Weird"<<endl;
    }
    else if(i == N%2 && N>6 && N<21){
        cout<<"Weird"<<endl;
    }
    else{
        cout<<"Not Weird"<<endl;
    }
    return 0;
}
