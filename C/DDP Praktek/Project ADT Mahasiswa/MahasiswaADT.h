typedef struct {
    const char *nama, *nim, *predikat;
    float ets, eas, kuis, total;
    
} Mahasiswa;

float get_total(Mahasiswa mhs);

const char *get_predicate(Mahasiswa mhs);

const float bobotETS = 0.35;
const float bobotEAS = 0.4;
const float bobotKUIS= 0.25;
