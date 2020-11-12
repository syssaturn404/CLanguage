#include <stdio.h>

	void main()
	{
	
		/** kita membuat 2 var dan yang satu untuk 
                menambahkan string d belakang
		menggunakan fungsi strcpy **/
		char contohna[] = "Contoh studi kasus";
		char kedua[] = "Ini studi kasus untuk fungsi strcpy";

		// dan kita gabungkan ke2 string tsb
		strcpy(contohna, kedua);
		
		// kita panggil 
		printf("Apa ini ? : %s\n", contohna);
	}
