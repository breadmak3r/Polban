//File			: SpecifierC.c
//Deskripsi		: Penjelasan Specifier yang ada di Bahasa Pemrogaman C beserta contohnya
//Dibuat oleh	: Alnez Rainansantana / 231524001
//Tanggal		: 25 Oktober 2023

#include <stdio.h>
#define printf __mingw_printf // Digunakan supaya mampu membaca 'long Double'

int main()
{
	//%d
	//Ini digunakan untuk mencetak atau membaca nilai bertipe data integer (bilangan bulat). 
	//Misalnya, jika Anda ingin mencetak sebuah integer dengan printf, Anda akan menggunakan %d.
	
	printf("PENJELASAN SPECIFIER YANG ADA DI BAHASA PEMROGAMAN C BESERTA CONTOHNYA\n\n");
	printf("1.	Specifier %%d\n\n");
	printf("	Contoh penggunaan %%d :\n");
	
	int num1 = 42;
	printf("	Nilai integer: %d\n\n", num1);
	
	//%f
	//Digunakan untuk mencetak atau membaca nilai bertipe data floating-point (angka desimal).

	printf("2.	Specifier %%f\n\n");
	printf("	Contoh penggunaan %%f :\n");
	
	float num2 = 3.14;
	printf("	Nilai float: %f\n\n", num2);

	//%Lf
	//Ini adalah format specifier khusus untuk mencetak atau membaca nilai bertipe data double-precision floating-point (dengan lebih banyak presisi daripada 'float').

	printf("3.	Specifier %%Lf\n\n");
	printf("	Contoh penggunaan %%Lf :\n");
	
	long double num3 = 3.14159265359;
	printf("	Nilai long double: %Lf\n\n", num3);
	// Khusus C Latest Version, gunakan '#define printf __mingw_printf' supaya output sesuai
	
	//%c
	//Digunakan untuk mencetak atau membaca karakter (bertipe data 'char').

	printf("4.	Specifier %%c\n\n");
	printf("	Contoh penggunaan %%c :\n");
	
	char ch = 'A';
	printf("	Karakter: %c\n\n", ch);
	
	//%c
	//Digunakan untuk mencetak atau membaca karakter (bertipe data 'char').

	printf("5.	Specifier %%s\n\n");
	printf("	Contoh penggunaan %%s :\n");
	
	char nama[] = "John";
	printf("	Nama: %s\n\n", nama);

	//%p
	//Digunakan untuk mencetak alamat dari sebuah pointer.

	printf("6.	Specifier %%p\n\n");
	printf("	Contoh penggunaan %%p :\n");
	
	int angka = 42;
	int *ptr = &angka;
	printf("	Alamat variabel angka: %p\n\n", (void *)ptr);
	//output yang dicetak ketika Anda menggunakan %p untuk mencetak alamat memori dari sebuah pointer biasanya dalam format heksadesimal.
	
	//%x dan %X
	//Digunakan untuk mencetak nilai integer dalam format heksadesimal. '%x' digunakan untuk huruf kecil, sementara '%X' digunakan untuk huruf besar.

	printf("7.	Specifier %%x dan %%X\n\n");
	printf("	Contoh penggunaan %%x :\n");
	
	int num4 = 255;
	printf("	Nilai heksadesimal: %x\n\n", num4);
	
	printf("	Contoh penggunaan %%x :\n");
	
	int num5 = 255;
	printf("	Nilai heksadesimal: %X\n\n", num5);

	//%u
	//Mencetak nilai integer tanpa tanda (unsigned integer)

	printf("8.	Specifier %%u\n\n");
	printf("	Contoh penggunaan %%u :\n");
	
	unsigned int num6 = 42;
	printf("	Nilai unsigned integer: %u\n\n", num6);
	
	//%o
	//Mencetak nilai integer dalam format oktal (basis 8)

	printf("9.	Specifier %%o\n\n");
	printf("	Contoh penggunaan %%o :\n");
	
	int num7 = 42;
	printf("	Nilai oktal: %o\n\n", num7);
	
	//%e dan %E
	//Mencetak nilai floating-point dalam notasi eksponensial.

	printf("10.	Specifier %%e dan %E\n\n");
	printf("	Contoh penggunaan %%e :\n");
	
	float num8 = 0.00123;
	printf("	Notasi eksponensial: %e\n\n", num8);
	
	printf("	Contoh penggunaan %%E :\n");
	
	float num9 = 0.00123;
	printf("	Notasi eksponensial: %E\n\n", num9);
	
	//%g dan %G
	//Mencetak nilai floating-point dalam notasi eksponensial atau desimal, tergantung pada presisi.

	printf("11.	Specifier %%g dan %G\n\n");
	printf("	Contoh penggunaan %%g :\n");
	
	float num10 = 0.00123;
	printf("	Notasi eksponensial atau desimal: %g\n\n", num10);
	
	printf("	Contoh penggunaan %%G :\n");
	
	float num11 = 0.00123;
	printf("	Notasi eksponensial atau desimal: %G\n\n", num11);
	
	//%a, %A, %f, %F, %lf
	//Format specifier untuk bekerja dengan floating-point dan berbagai format.

	printf("12.	Specifier %%a, %%A, %%f, %%F, %%lf\n\n");
	printf("	Contoh penggunaan :\n");
	
	double num12 = 3.14159265359;
	printf("	Notasi eksponensial heksadesimal: %a\n", num12);
	printf("	Desimal: %f\n", num12);
	printf("	Double precision desimal: %lf\n\n", num12);
	
	//%n
	//Menghitung jumlah karakter yang telah dicetak.

	printf("13.	Specifier %%n\n\n");
	printf("	Contoh penggunaan %%n :\n");
	
	int count;
	printf("	Ini akan menghitung jumlah karakter yang dicetak: %n\n", &count);
	printf("	Jumlah karakter yang dicetak: %d\n", count);



}
