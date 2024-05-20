#include <stdio.h>

char tentukanGrade(int nilaiAkhir) {
    char grade;

    if (nilaiAkhir >= 85 && nilaiAkhir <= 100) {
        grade = 'A';
    } else if (nilaiAkhir >= 70 && nilaiAkhir <= 84) {
        grade = 'B';
    } else if (nilaiAkhir >= 55 && nilaiAkhir <= 69) {
        grade = 'C';
    } else if (nilaiAkhir >= 40 && nilaiAkhir <= 54) {
        grade = 'D';
    } else if (nilaiAkhir >= 0 && nilaiAkhir <= 39) {
        grade = 'E';
    } else {
        grade = 'X'; 
    }

    return grade;
}

int main() {
    int nilaiAkhir;
    char grade;

    printf("Masukkan nilai akhir (0-100): ");
    scanf("%d", &nilaiAkhir);

    grade = tentukanGrade(nilaiAkhir);

    if (grade != 'X') {
        printf("Grade: %c\n", grade);
    } else {
        printf("Nilai tidak valid.\n");
    }

    return 0;
}