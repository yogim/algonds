#include<stdio.h>
#include<iostream>
using namespace std;


class Arrayprob {
private:
	static const int length = 3;
	int array[length] = { 1,2,3 };

public:

	void findMax() {
		int max = 0;
		for (int i = 0; i <= length; i++) {
			if (array[i] > max)
			{
				max = array[i];
			}
		}
		cout << max;
	}

	void findSum() {
		int sum = 0;
		for (int i = 0; i <= (length-1); i++) {
			sum = sum + array[i];
		}
		cout << sum ;
	}

	void sortArrayInAsc() {
		int temp;
		for (int i = 0; i <= 2; i++) {
			for (int j = 0; j <= 2- i; j++) {
				if (array[j] > array[j + 1]) {
					temp = array[j];
					array[j] = array[j + 1];
					array[j + 1] = temp;
				}
				//displayArray();
				cout << "---\n";
			}
		}
	} // end sort

	void displayArray() {
		for (int i = 0; i <= length-1; i++) {
			cout << array[i] << "\n";
		}
	}


	void splitAndMerge() {
		// input array = {1,4,5,6,7,2}
		// position =3
		//output array = {6,7,2,1,4,5}
		int splitLoc = 0;
		int *que
		cout << "enter location for split";
		cin >> splitLoc;
		//int queueSize =0;
		if ((length - splitLoc + 1) > splitLoc) {
			int queueSize = length - splitLoc + 1;
			int *queue = new int[queueSize];
			for (int )
			
		}
		else {
			 
		}
	}

};

void main() {

	Arrayprob *ar = new Arrayprob();
	//ar->findMax();
	//ar->findSum();
	//ar->displayArray();
	ar->sortArrayInAsc();
	//ar->displayArray();


}