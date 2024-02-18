	#include <stdio.h>
 
int Kuadrat(int N){
//Melakukan seleksi apakah angka yang input == 1 karena jika angka == 1 diinput hasilnya tetap 1.
	if(N == 1){
		return 1;
	}
 
	else{
		return ((2*N)-1) + Kuadrat(N-1);
	}
}
 
 
int main(){
	int N;
	printf("Masukkan angka : ");
	scanf("%d", &N);
	
		//memanggil function dari Kuadrat
	int hasil = Kuadrat(N);
	printf("Hasil : %d\n", hasil);
	
	return 0;
}
