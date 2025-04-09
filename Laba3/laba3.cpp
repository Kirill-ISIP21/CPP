#include <iostream>
#include <conio.h>

using namespace std;
using std::cout;

void MinMaxSort(int mas[], int size) {
	int imin, imax;
	int i;
	int n = size;
	imin = i = 0; imax = i = 0;
	for (i = 0; i < n; i++) {
		imin = i;
		for (int j = i + 1; j < n; j++)
			if (mas[j] < mas[imin]) imin = j;
		int t = mas[i];
		mas[i] = mas[imin];
		mas[imin] = t;
	}

	cout << "\n\t\t\t###MinMaxSort###\n"<< endl;
	for (i = 0; i < n; i++)
		cout << mas[i] << " ";
	cout <<endl<< "\n\t\t\t\t***\n";
}

void BubbleSort(int mas[], int size) {
	long i, j;
	int n = size;
	int x;
	for (i = 0; i < size; i++) {
		for (j = size - 1; j > i; j--) {
			if (mas[j - 1] > mas[j]) {
				x = mas[j - 1];
				mas[j - 1] = mas[j];
				mas[j] = x;
			}
		}
	}
	cout << "\n\t\t\t###BubbleSort###\n"<<endl;
	for (i = 0; i < n; i++)
		cout << mas[i] << " ";
	cout << endl<< "\n\t\t\t\t***\n";
}


void quickSortR(int mas[],int size, int t) {
	
	int S = size;
	int i = 0, j = S-1;
	int temp, p;
	p = mas[S/2];
	do { 
		while (mas[i] < p) i++;
		while (mas[j] > p) j--;
		if (i <= j) {
			temp = mas[i]; 
			mas[i] = mas[j];
			mas[j] = temp;
			i++; j--;
		}
	} while (i <= j);
		
		if (j > 0) quickSortR(mas, j+1,t);
		if (size > i) quickSortR(&mas[i], S - i,t);
	
		if (S == t) {
			cout << "\n\t\t\t###QuickSort###\n" << endl;
			for (i = 0; i < size; i++)
				cout << mas[i] << " ";
			cout << endl << "\n\t\t\t\t***\n";
		}
}


void EvenOddSort(int mas[], int size) {
	int countE, countO, i, j, x;
	countE = 0, countO = 0;
	for (int i = 0; i < size; i++) {
		if (mas[i] % 2 == 0) countE++;
		if (mas[i] % 2 != 0) countO++;
	}

	int *masE = new int [countE];
	int *masO = new int[countO];
	countE = 0, countO = 0;
	for (int i = 0; i < size; i++) {
		if (mas[i] % 2 == 0) { 
			masE[countE] = mas[i];
			countE++; }
		if (mas[i] % 2 != 0) {
			masO[countO] = mas[i];
			countO++; }
			}
	

	for (i = 0; i < countE; i++) { 
		for (j = countE - 1; j > i; j--) { 
			if (masE[j - 1] > masE[j]) {
				x = masE[j - 1];
				masE[j - 1] = masE[j];
				masE[j] = x;
			}
		}
	}
	for (i = 0; i < countO; i++) { 
		for (j = countO - 1; j > i; j--) { 
			if (masO[j - 1] < masO[j]) {
				x = masO[j - 1];
				masO[j - 1] = masO[j];
				masO[j] = x;
			}
		}
	}

	cout << "\n\t\t\t###EvenSort###\n" << endl;
	for (i = 0; i < countE; i++)
		cout << masE[i] << " ";
	cout << endl << "\n\t\t\t\t***\n";

	cout << "\n\t\t\t###OddSort###\n" << endl;
	for (i = 0; i < countO; i++)
		cout << masO[i] << " ";
	cout << endl << "\n\t\t\t\t***\n";
}

void IndexSort(int mas[], int size) {
	int N1, N2, x, i, j;
	cout << "Enter first index" << endl;
	cin >> N1;
	cout << "Enter second index" << endl;
	cin >> N2;

	int SortSize = N2-N1+1;
	if (N2 <= N1 || N1<1 || N2>size) {
		cout << "error, index not valid";
		return;
	}

	int* masNew = new int[SortSize];
	
	for (i = N1, j = 0; i<=N2 ; i++,j++) {
		masNew[j] = mas[i];
	}

	

	for (i = 0; i < SortSize; i++) { 
		for (j = SortSize - 1; j > i; j--) { 
			if (masNew[j - 1] > masNew[j]) {
				x = masNew[j - 1];
				masNew[j - 1] = masNew[j];
				masNew[j] = x;
			}
		}
	}

	cout << "\n\t\t\t###IndexSortGrow###\n" << endl;
	for (i = 0; i < SortSize; i++)
		cout << masNew[i] << " ";
	cout << endl << "\n\t\t\t\t***\n";

	for (i = 0; i < SortSize; i++) { 
		for (j = SortSize - 1; j > i; j--) { 
			if (masNew[j - 1] < masNew[j]) {
				x = masNew[j - 1];
				masNew[j - 1] = masNew[j];
				masNew[j] = x;
			}
		}
	}

	cout << "\n\t\t\t###IndexSortShift###\n" << endl;
	for (i = 0; i < SortSize; i++)
		cout << masNew[i] << " ";
	cout << endl << "\n\t\t\t\t***\n";
}

int main(void) {
	int mas1[] = { 2,5,-8,1,-4,6,3,-5,-9,13,0,4,9 };
	int mas2[] = { 2,5,-8,1,-4,6,3,-5,-9,13,0,4,9 };
	int mas3[] = { 2,5,-8,1,-4,6,3,-5,-9,13,0,4,9 };
	int mas4[] = { 2,5,-8,1,-4,6,3,-5,-9,13,0,4,9 };
	int n1 = sizeof(mas1) / sizeof(int);
	int n2 = sizeof(mas2) / sizeof(int);
	int n3 = sizeof(mas3) / sizeof(int);
	int n4 = sizeof(mas4) / sizeof(int);
	MinMaxSort(mas1, n1);
	BubbleSort(mas2, n2);
	quickSortR(mas3, n3, n3);
	EvenOddSort(mas4, n4);
	IndexSort(mas4, n4);
	
	return 0;
}