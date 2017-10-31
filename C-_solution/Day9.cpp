#include <bits/stdc++.h>

using namespace std;

int factorial(int);

int main() {
    int n;
    cin >> n;
    int result = factorial(n);
    cout << result << endl;
    return 0;
}

int factorial(int n){
    int x=0;
    if(n>1){
  return (static_cast<long>(factorial(n-1) * n));
    }
  else{
    return 1;
  }
}
