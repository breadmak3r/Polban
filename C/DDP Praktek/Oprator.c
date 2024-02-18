/* File			: oprator.c										*/
/* Deskripsi	: Contoh pengoperasian variabel bertipe dasar	*/
/* Dibuat oleh	: Dosen DDP / 132 231 592						*/
/* Tanggal		: 30/08/01										*/

#include <stdio.h>
#include "boolean.h"

int main()
{
	//Kamus
	boolean bool1, bool2, TF;
	int i, j, hsl;
	float x, y, res;
	
	//Algoritma
	printf("Operasi Boolean \n");
	bool1= true;
	bool2= false;
	printf("Nilai Bool1 = %d dan Nilai Bool2 = %d \n", bool1, bool2);
	TF= bool1&&bool2;									//Operasi AND dalam Boolean
	printf("\t1. TF = Bool1 AND Bool2	: %d \n", TF);
	TF= bool1||bool2;									//Operasi OR dalam Boolean
	printf("\t2. TF = Bool1 OR Bool2	: %d \n", TF);
	TF= !bool1;											//Operasi NOT dalam Boolean
	printf("\t3. TF = NOT Bool1	: %d \n", TF);
	TF= bool1^bool2;									//Operasi XOR dalam Boolean
	printf("\t4. TF = Bool1 XOR Bool2	: %d \n\n", TF);
	
	//Operasi Numerik Bilangan Bulat
	printf("Operasi Numerik Bilangan Bulat\n");
	i=5; j=2;
	printf("Nilai i = %d dan Nilai j = %d \n", i, j);
	hsl= i+j;
	printf("\t1. Hasil operasi i+j 	 : adalah %d\n", hsl);
	hsl= i-j;
	printf("\t2. Hasil operasi i-j 	 : adalah %d\n", hsl);
	hsl= i/j; 											//Pembagian bilangan bulat
	printf("\t4. Hasil operasi i*j	 : adalah %d\n", hsl);
	hsl= i%j;											//Sisa pembagian bilangan bulat
	printf("\t3. Hasil operasi i div j : adalah %d\n", hsl);
	hsl= i*j;
	printf("\t5. Hasil operasi i mod j : adalah %d\n\n", hsl);
	
	//Operasi Numerik Bilangan Real
	printf("Operasi Numerik Bilangan Real\n");
	x=5.5; 
	y=2.25;
	printf("Nilai x = %f dan Nilai y = %f \n", x, y);
	res= x+y;
	printf("\t1. Hasil dari operasi x+y adalah %f\n", res);
	res= x-y;
	printf("\t2. Hasil dari operasi x-y adalah %f\n", res);
	res= x*y;
	printf("\t3. Hasil dari operasi x*y adalah %f\n", res);
	res= x/y;
	printf("\t4. Hasil dari operasi x/y adalah %f\n\n", res);
	
	//Operasi Relasional Numerik Bilangan Bulat
	printf("Operasi Relasional Numerik Bilangan Bulat\n");
	printf("Karena nilai i = %d dan nilai j = %d, Maka: \n", i, j);
	TF= (i==j);
	printf("\t1. Hasil operasi TF = (i==j) adalah %d\n", TF);
	TF= (i!=j);
	printf("\t2. Hasil operasi TF = (i!=j) adalah %d\n", TF);
	TF= (i<j);
	printf("\t3. Hasil operasi TF = (i<j)  adalah %d\n", TF);
	TF= (i>j);
	printf("\t4. Hasil operasi TF = (i>j)  adalah %d\n", TF);
	TF= (i<=j);
	printf("\t5. Hasil operasi TF = (i<=j) adalah %d\n", TF);
	TF= (i>=j);
	printf("\t6. Hasil operasi TF = (i>=j) adalah %d\n\n", TF);
	
	//Operasi Relasional Numerik Bilangan Real
	printf("Operasi Relasional Numerik Bilangan Real\n");
	printf("Karena nilai x = %f dan nilai j = %f, Maka: \n", x, y);
	TF= (x==y);
	printf("\t1. Hasil operasi TF = (x==y) adalah %d\n", TF);
	TF= (x!=y);
	printf("\t2. Hasil operasi TF = (x!=y) adalah %d\n", TF);
	TF= (x<y);
	printf("\t3. Hasil operasi TF = (x<y)  adalah %d\n", TF);
	TF= (x>y);
	printf("\t4. Hasil operasi TF = (x>y)  adalah %d\n", TF);
	TF= (x<=y);
	printf("\t5. Hasil operasi TF = (x<=y) adalah %d\n", TF);
	TF= (x>=y);
	printf("\t6. Hasil operasi TF = (x>=y) adalah %d\n", TF);
	return 0;
}
