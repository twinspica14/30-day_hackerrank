#include<iostream>
#include<bitset>
#include<string>
#include<set>

std::set<int>j;
int main() {
	int a;
	int k=0;
	std::cin >> a;

	std::string binary = std::bitset<32>(a).to_string(); //to binary, bitset(x) is very important, as it's function
	//std::cout << binary << std::endl;
	//std::cout << binary.size() << std::endl;
	std::string lol = std::bitset<100>(0).to_string();
	binary = binary + lol;
	for (int i = 0; i < 100; i++) {
		if (binary.at(i) == '1') {
			k = k + 1;
			//std::cout << "True" << std::endl;
		}
		else {
			j.insert(k);
			k = 0;
			

		}
		

	}
	
	if (!j.empty())
		std::cout<<*j.rbegin();
	

	system("pause");
}
