#include <iostream>
#include <ctime>

using namespace std;

void merge(int* x, int start, int middle, int end) {
	int* temp = new int[end - start];
	int i1 = start, i2 = middle, dest = 0;
	while (i1 < middle && i2 < end) {
		if (x[i1] < x[i2]) {
			temp[dest] = x[i1];
			dest++;
			i1++;
		}
		else {
			temp[dest] = x[i2];
			dest++;
			i2++;
		}
	}
	if (i1 == middle) {
		while (i2 < end) {
			temp[dest] = x[i2];
			dest++;
			i2++;
		}
	}
	else if (i2 == end) {
		while (i1 < middle) {
			temp[dest] = x[i1];
			dest++;
			i1++;
		}
	}
	for (int i = start; i < end; i++) {
		x[i] = temp[i - start];
	}
	delete[] temp;
}

void merge_sort(int* x, int start, int end) {
	if (end - start <= 1) return;
	int middle = (start + end) / 2;
	merge_sort(x, start, middle);
	merge_sort(x, middle, end);
	merge(x, start, middle, end);
}

int main() {
	srand(time(0));
	int a[100];
	for (int i = 0; i < 100; i++) {
		a[i] = rand() % 1000;
	}
	merge_sort(a, 0, 100);
	for (int i = 0; i < 100; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}
