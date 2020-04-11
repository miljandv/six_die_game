#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


int solution(vector<int>& A) {
	int arr[6] = { 0 };
	for (int i = 0; i < A.size(); i++) {
		arr[A[i]-1]++;
	}
	int min = 1000;
	int curr = 0;
	for (int i = 0; i < 6; i++) {
		curr = 0;
		for (int j = 0; j < 6; j++) {
			if (i != j) {
				curr += ((i + j != 5) ? 1 : 2)*arr[j];
			}
		}
		if (curr < min)min = curr;
	}
	return min;
}

int main() {
	vector<int> A1 = { 1,1,1,1,1,1,2,3 };
	vector<int> A2 = { 1,1,6 };
	vector<int> A3 = { 1,6,2,3 };
	cout << solution(A1) << endl;
	cout << solution(A2) << endl;
	cout << solution(A3) << endl;

}