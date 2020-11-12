#include <iostream>
using namespace std;

int main()
{
	int a = 1;

	// info 
	cout << "Nilai sebelum increment adalah : " << a << endl;
	
	// increment a
	a++;
	cout << "Setelah menggunakan increment adalah : " << a << endl;
	
	// increment
	++a;
	cout << "Setelah menggunakan increment lagi adalah : " << a << endl;

	// increment
	a++;
	cout << "Nilai setelah increment adalah : " << a << endl;

	// increment lagi
	++a;
	cout << "Nilai setelah increment lagi adalah : " << a << endl;
	cout << "Dan seterusnya, Terimakasih"<< endl;
	return 0;
}
