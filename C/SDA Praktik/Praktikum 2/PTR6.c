#include <stdio.h>

int main(){
    static int tgl_lahir[] = {18, 6, 1989};
    int *ptgl;
    ptgl = tgl_lahir;

    printf("Nilai yang ditunjuk oleh ptgl = %d\n", *ptgl);
    printf("Nilai dari tgl_lahir[0] = %d\n", tgl_lahir);

    return 0;
}