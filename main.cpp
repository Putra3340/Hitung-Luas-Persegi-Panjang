#include <iostream>

int main() {
	std::cout << "Program hitung luas persegi panjang" << std::endl;
	int panjang, lebar, luas = 0;
	std::cout << "Masukkan Panjang :";
	std::cin >> panjang;
	std::cout << "Masukkan Lebar :";
	std::cin >> lebar;
	luas = panjang * lebar;
	std::cout << luas;
	return 0;
}