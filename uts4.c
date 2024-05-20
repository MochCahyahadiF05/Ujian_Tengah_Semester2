#include <stdio.h>

typedef struct{
    int NPM[12];
    char nama[20];
    char nilai[2];
}mahasiswa;

void inputData(mahasiswa *p){
    printf("Masukan NPM Mahasiswa:");
    scanf("%d", &p->NPM);
    printf("Masukan Nama Mahasiswa:");
    scanf("%s", p->nama);
    printf("Masukan Nilai Mahasiswa:");
    scanf("%s", p->nilai);
}

void displayData(mahasiswa *mhs, int size) {
    printf("\nData Mahasiswa:\n");
    printf("%-15s %-20s %-5s\n", "NPM", "Nama", "Nilai");
    printf("------------------------------------------------\n");
    for (int i = 0; i < size; i++) {
        printf("%-15d %-20s %-5s\n", mhs[i].NPM, mhs[i].nama, mhs[i].nilai);
    }
}

void dummyArray(mahasiswa *p){
     // Inisialisasi 3 data dummy
    strcpy(p[0].NPM, "123456789");
    strcpy(p[0].nama, "Budi");
    strcpy(p[0].nilai, "A");

    strcpy(p[1].NPM, "987654321");
    strcpy(p[1].nama, "Siti");
    strcpy(p[1].nilai, "B");

    strcpy(p[2].NPM, "192837465");
    strcpy(p[2].nama, "Asep");
    strcpy(p[2].nilai, "C");
}

int searchData(mahasiswa *mhs, int size, int searchNPM) {
    for (int i = 0; i < size; i++) {
        if (mhs[i].NPM == searchNPM) {
            return i; // Mengembalikan indeks data jika ditemukan
        }
    }
    return -1; // Mengembalikan -1 jika tidak ditemukan
}

void displaySearchResult(mahasiswa *mhs, int index) {
    printf("\nHasil Pencarian:\n");
    printf("%-15s %-20s %-5s\n", "NPM", "Nama", "Nilai");
    printf("------------------------------------------------\n");
    printf("%-15d %-20s %-5s\n", mhs[index].NPM, mhs[index].nama, mhs[index].nilai);
}


int main(){
    int qty=4;
   mahasiswa mhs[qty]; // Array untuk qty mahasiswa
    int i;

   dummyArray(mhs);

    // Input data untuk 3 mahasiswa lainnya
    for(i = 3; i < qty; i++) {
        printf("\nMasukkan data untuk mahasiswa %d:\n", i + 1);
        inputData(&mhs[i]);
    }

    displayData(&mhs, qty);

    int searchNPM;
    printf("\nMasukkan NPM untuk pencarian: ");
    scanf("%d", &searchNPM);
    int foundIndex = searchData(mhs, qty, searchNPM);
    if (foundIndex != -1) {
        displaySearchResult(mhs, foundIndex);
    } else {
        printf("\nData tidak ditemukan untuk NPM %d\n", searchNPM);
    }

    return 0;
}
