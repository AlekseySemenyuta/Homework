#include <iostream>
#include<cmath>
using namespace std;
int T(int k, int people) {
	int* A = new int[k];
	for (int i = 0; i < k; i++) {
		cin >> A[i];
	}
	int Sum = 0, j = 0;
	for (int i = 0; i < k; i++) {
		Sum += A[i];
		j++;
	}
	double time = Sum / j;
	double sumpeople = 0;
	for (int i = 0; i < k; i++) {
		sumpeople += time / A[i];
	}
	double speed = sumpeople / time;
	return ceil(people / speed);
}
int main() {
	int people, k;
	double t;
	cin >> k >> people;
	t = T(k, people);
	cout << t;
	system("pause");
	return 0;
}