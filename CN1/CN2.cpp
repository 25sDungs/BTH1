#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;


void menu() {
	cout << "CN1: Kiem tra so nguyen to (1)\n",
		"CN2: Kiem tra nam nhuan (2)\n",
		"Thoat (3)",
		"Chon chuc nang: ";
}

int nhapSo() {
	int n;
	do {
		cout << "Nhap vao so muon kiem tra: ";
		cin >> n;
		if (n < 0) {
			cout << "so phai lon hon 0!\n";
		}
	} while (n < 0);
	return n;
}


bool isSNT(int m) {
	if (m < 2)
		return false;
	else if (m == 2)
		return true;
	else {
		for (int i = 3; i <= sqrt(m); i++)
			if (m%i == 0)
				return false;
	}
	return true;
}


int nhapNam() {
	int nam;
	do {
		cout << "Nhap vao nam muon kiem tra: ";
		cin >> nam;
		if (nam < 0) {
			cout << "Nam phai lon hon 0!\n";
		}
	} while (nam < 0);
	return nam;
}

bool KTNamNhuan(int nam) {
	if (nam % 4 == 0)
		return true;
	if (nam % 100 == 0 && nam % 400 == 0)
		return true;
	return false;

}




int main() {

	int chon;
	do {
		system("cls");
		menu();
		cin >> chon;
		if (chon < 1 && chon > 3)
			cout << "Chon sai! Chon lai!\n";
		switch (chon) {
		case 1: {
			
		}
		case 2: {
			if (KTNamNhuan(nhapNam()) == true)
				cout << "Nam do la nam nhuan!\n";
			else
				cout << "Nam do khong nhuan!";
			break;
		}
			default:
				break;
		}
	} while (chon != 3);


	system("pause");
	return 1;
}