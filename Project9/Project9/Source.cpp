#include <iostream>
using namespace std;
class arr {
public:
	pair <int, int>* data;
	int I = 0;
	int size;
	arr(int N) {
		size = N;
		data = new pair <int, int>[N];
	};
	arr(arr& A) {
		size = A.size;
		data = A.data;
	};
	~arr() {
		delete[] data;
	};
	pair <int, int> &operator[](int i) {
		while (i >= size) {
			i -= size;
		}
		return data[i];
	};
	void input() {
		int j, a, b;
		for (int i = I; i < size + I; i++) {
			j = i;
			while (j >= size) {
				j -= size;
			}
			cin >> a >> b;
			data[j] = make_pair(a, b);
		}
	};
	void output() {
		int j;
		for (int i = I; i < size + I; i++) {
			j = i;
			while (j >= size) {
				j -= size;
			}
			cout << data[j].first << " " << data[j].second << "\n";
		}
	};
	int Move(int k) {
		I += k;
		return I;
	}
};
int main() {
	int N, K;
	cin >> N;
	arr A(N);
	A.input();
	A.output();
	cin >> K;
	A.Move(K);
	A.output();
	system("pause");
}