#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int n = 0;
	int i = 0, j = 0, m = 0;
	std::cin >> n;
	std::string S, E, O;
	for (j = 0; j < n; j++) {
		std::cin >> S;
		for (i = 0; i < S.size(); i++) {
			if (i % 2 == 0) {
				E = E + S[i];
			}
			else {
				O = O + S[i];
			}
		}
		std::cout << E <<" "<< O << std::endl;
        E.clear();
		O.clear();
	}
	system("pause");
	return 0;
}
