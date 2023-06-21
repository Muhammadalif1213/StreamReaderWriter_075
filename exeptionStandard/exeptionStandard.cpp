#include <iostream>
#include <exception>
//untuk object exeption yang akan digunakan 
#include <array>
//untuk object array yang akan kita gunakan
using namespace std;
int main() 
{
	cout << "awal program" << endl;
	try {
		array<int, 3> data = { 3,5,7 };
		//pesan array integer 3 elemen
		cout << data.at(5) << endl;
		//memanggil array elemen ke 5
	}
	catch (exception& e) {
		//penangkap menggunakan object exception 
		cout << e.what() << endl;
		/*akan dieksekusi karena array data hanya memiliki 3 elemen*/
	}

}