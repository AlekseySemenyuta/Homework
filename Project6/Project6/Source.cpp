#include <iostream>
#include <stack>
#include <string>
using namespace std;
bool Brackets(char opening, char closing) {
	if (opening == '(' && closing == ')') return true;
	else if (opening == '[' && closing == ']') return true;
	else if (opening == '{' && closing == '}') return true;
	return false;
}
bool correct(string b) {
	stack<char> A;
	for (int i = 0; i < b.length(); i++) {
		if (b[i] == '(' || b[i] == '{' || b[i] == '[') {
			A.push(b[i]);
		}
		else if (b[i] == ')' || b[i] == '}' || b[i] == ']') {
			if (A.empty() || !Brackets(A.top(), b[i])) {
				return false;
			}
			else {
				A.pop();
			}
		}
	}
	return A.empty();
}
int main() {
	string c;
	cin >> c;
	if (correct(c)) {
		cout << "correct" << endl;
	}
	else {
		cout << "incorrect" << endl;
	}
	system("pause");
	return 0;
}