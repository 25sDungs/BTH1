#include <iostream>
using namespace std;

bool isPrime(int a) {

	for (int i = 2; i <= sqrt(a); i++) {
		if (a % i == 0)
			return false;
	}
	return a >= 2;
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
	int n = 0, chon=0;
	while (chon != 9) {
		system("pause");
		system("cls");
		cout << "==================MENU==================\n";
		cout << "1. Kiem tra so nguyen to\n";
		cout << "2. Kiem tra nam nhuan\n";
		cout << "9. Thoat chuong trinh \n";
		cout << "Lua chon: ";
		cin >> chon;
		switch (chon) {
		case 1:
			do{
				cout << "Nhap so nguyen duong: ";
				cin >> n;
			} while (n <= 0);
			if (isPrime(n))
				cout << n << " la so nguyen to\n";
			else
				cout << n << " khong phai la so nguyen to \n";
			break;
		case 2: {
			if (KTNamNhuan(nhapNam()) == true)
				cout << "Nam do la nam nhuan!\n";
			else
				cout << "Nam do khong nhuan!";
			break;
		}
		case 9:
			return 0;
			break;
		default:
			cout << "Nhap lai";
		}
		
	}
	return 0;
}



