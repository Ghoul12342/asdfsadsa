#include <iostream>
using namespace std;
int main() {
	/*int mass[5];
	for (int i = 0; i < 5; i++) {
		cin >> mass[i];
	}
	for (int i = 0; i < 5; i++) {
		cout << mass[i] << " ";
	}*/
	/*int mass[5];
	for (int i = 0; i < 5; i++) {
		cin >> mass[i];
	}
	for (int i = 4; i >=0 ; i--) {
		cout << mass[i] << " ";
	}*/
	/*int arr[10];
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i <= 10; i+=2) {
		
		cout << arr[i] << " ";
	}*/
	//1
	/*int sum = 0;
	int mass[10];
	for (int i = 0; i < 10; i++) {
		cin >> mass[i];
	}
	for (int i = 0; i < 10; i++) {
		if (mass[i] > 0) {
			sum = sum + 1;
		}
		
	}
	cout << sum;*/
	//2
	/*int mass[10];
	int sum = 0;
	int sym = 0;
	for (int i = 0; i < 10; i++) {
		cin >> mass[i];
	}
	for (int i = 0; i < 10; i++) {
		if (mass[i]%2==0) {
			sum = sum + 1;
		}
		if (mass[i]%2!=0) {
			sym = sym + 1;
		}
	}
	cout << sum << " " << sym;*/
	//3
	/*int mass[10];
	int sum = 0;
	for (int i = 0; i < 10; i++) {
		cin >> mass[i];
	}
	for (int i = 0; i < 10; i++) {
		if (mass[i] % 3 != 0) {
			sum = sum + mass[i];
		}
	}
	cout << sum;*/
	
	//4
	/*int mass[10];
	int pr = 1;
	for (int i = 0; i < 10; i++) {
		cin >> mass[i];
	}
	for (int i = 0; i < 10; i++) {
		if (mass[i] % 3 == 0||mass[i]%5!=0) {
			pr = pr * mass[i];
		}
	}
	cout << pr;*/
       //5
	/* int mass[10];
		int sum = 0;
		for (int i = 0; i < 10; i++) {
			cin >> mass[i];
		}
		for (int i = 0; i < 10; i++) {
			if (i % 2 != 0) {
				sum = sum + mass[i];
			}
		}
		cout << (float)sum / 10;*/






}