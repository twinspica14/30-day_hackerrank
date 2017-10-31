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
#include <unordered_map>

using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> arr1;
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
   int i = 0;
    int *p = arr.data();
    for(i = 1;i< (arr.size()+1);i++){
        arr1.push_back(*(p + n - i));
    }
    for(int k = 0;k < arr1.size();k++){
       cout<<arr1[k]<<" ";
    }
                       
                       
    return 0;
}
