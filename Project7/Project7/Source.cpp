#include <bits.h> 
#include <iostream>
#include<stack>
using namespace std;
class stack_with_max {
	stack <int> s;
	int MAX;
public:
	void getMAX() {
		if (s.empty()) {
			cout << "Stack is empty";
		}
		else {
			cout << MAX << endl;
		}
	}
	void pop() {
		if (s.empty()) {
			cout << "Stack is empty";
			return;
		}
		int t = s.top();
		s.pop();
		if (t > MAX) {
			cout << MAX << endl;
			MAX = 2 * MAX - t;
		}
		else {
			cout << t << endl;
		}
	}
	void push(int x) {
		if (s.empty()) {
			MAX = x;
			s.push(x);
			cout << "Number Inserted: " << x << "\n";
			return;
		}
		if (x > MAX) {
			s.push(2 * x - MAX);
			MAX = x;
		}
		else {
			s.push(x);
			cout << "Number Inserted: " << x << "\n";
		}
	}
};
int main() {
	stack_with_max A;
	A.push(1);
	A.getMAX();
	A.pop();
	return 0;
}