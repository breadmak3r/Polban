#include <stdio.h>

int main(){
    float *pu;  // Deklarasi pointer pu
    float nu;   // Deklarasi variabel nu bertipe float
    int u = 1234;   // Deklarasi variabel u bertipe integer dan diberi nilai 1234

    pu = &u;    // Variabel pu dimasukkan alamat variabel u
    nu = *pu;   // Variabel nu dimasukkan nilai dari pointer pu

    printf("u = %d\n", u);  // Menampilkan nilai u
    printf("nu = %f\n", nu);    // Menampilkan nilai nu

    return 0;
}