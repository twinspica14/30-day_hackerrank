#include <iostream>
#include <vector>
#include<string>
using namespace std;


class Person {
protected:
	string firstName;
	string lastName;
	int id;
public:
	Person(string firstName, string lastName, int identification) {
		this->firstName = firstName;
		this->lastName = lastName;
		this->id = identification;
	}
	void printPerson() {
		cout << "Name: "<< lastName << ", " << firstName << "\nID: " << id << "\n";
		
	}

};
class Student : public Person {
private:
	vector<int> testScores;
public:
	/*
	*   Class Constructor
	*
	*   Parameters:
	*   firstName - A string denoting the Person's first name.
	*   lastName - A string denoting the Person's last name.
	*   id - An integer denoting the Person's ID number.
	*   scores - An array of integers denoting the Person's test scores.
	*/
	Student(string firstName, string lastName, int identification, vector<int> z) : Person(firstName, lastName, identification) {
		this->testScores = z;
	}
	string calculate() {
		int n = this->testScores.size();
		vector<int>::iterator it;
		int s = 0;
		for (it = testScores.begin(); it != testScores.end(); it++) {
			s = *it +s;
		}
		int g = s / n;
		if (g >= 90) { return "O"; }
		if (g >= 80 && g<90) { return "E"; }
		if (g >= 70 && g<80) { return "A"; }
		if (g >= 55 && g<70) { return "P"; }
		if (g >= 40 && g<55) { return "D"; }
		else { return "T"; }
	}
};
int main() {
	string firstName;
	string lastName;
	int id;
	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
	vector<int> scores;
	for (int i = 0; i < numScores; i++) {
		int tmpScore;
		cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	system("pause");
}
