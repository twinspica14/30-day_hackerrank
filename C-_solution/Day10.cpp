#include<iostream>
#include<bitset>
#include<string>
#include<set>

std::set<int>j;
int main() {
	int a;
	int k=0;
	std::cin >> a;

	std::string binary = std::bitset<10>(a).to_string(); //to binary, bitset(x) is very important, as it's function
	
	
	for (int i = 0; i < binary.size(); i++) {
		if (binary.at(i) == '1') {
			k = k + 1;
			//std::cout << "True" << std::endl;
		}
		else {
			j.insert(k);
			k = 0;
			

		}
		

	}
	
		std::cout << *j.rbegin() << std::endl;

	system("pause");
}
