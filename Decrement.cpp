#include <iostream>
using namespace std;

int main()
{
	int a = 5;

	// info 
	cout << "Nilai sebelum decrement adalah : " << a << endl;
	
	// decrement a
	a--;
	cout << "Setelah menggunakan decrement adalah : " << a << endl;
	
	// decrement
	--a;
	cout << "Setelah menggunakan decrement lagi adalah : " << a << endl;

	// decrement
	a--;
	cout << "Nilai setelah decrement adalah : " << a << endl;

	// decrement lagi
        --a;
	cout << "Nilai setelah decrement lagi adalah : " << a << endl;
	cout << "Dan seterusnya, Terimakasih"<< endl;
	return 0;
}
