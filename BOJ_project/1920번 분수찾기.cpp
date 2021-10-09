#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int N, M, num;
	int start, half;
	scanf("%d", &N);
	int* A;
	A = new int[N];
	for (int i = 0; i < N; i++) scanf("%d",&A[i]);
	sort(A, A + N);
	half = A[N / 2];
	scanf("%d", &M);
	for (int i = 0; i < M; i++) {
		start = 0;
		scanf("%d", &num);
		if (num >= half) start = N / 2;
		int check = 0;
		for (int i = start; i < N; i++) {
			if (A[i] == num) {
				check = 1;
				break;
			}
			else if(A[i] > num) {
				break;
			}
		}
		printf("%d\n",check);
	}

	delete[] A;
}