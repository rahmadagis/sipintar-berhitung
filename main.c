
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
enum operasi {tambah, kurang, kali, bagi};
int main() {
    int skor = 0, a, b, Jawaban, input;
    char simbol;
    srand(time(NULL));
    printf("=== SI PINTAR BERHITUNG ===\n");
    for (int i = 0; i < 5; i++) {
        a = rand() % 10 + 1;
        b = rand() % 10 + 1;
        switch (rand() % 3) {
            case tambah:
                simbol = '+';
                Jawaban = a + b;
                break;
            case kurang:
                if (a < b) { int t = a; a = b; b = t; }
                simbol = '-';
                Jawaban = a - b;
                break;
            default:
                simbol = '*';
                Jawaban = a * b;
                break;
        }
        printf("Soal %d: %d %c %d = ", i + 1, a, simbol, b);
        scanf("%d", &input);
        if (input == Jawaban) { printf("Benar!\n"); skor++; }
        else printf("Salah! Jawaban: %d\n", Jawaban);
    }
    printf("Skor kamu: %d dari 5\n", skor);
    return 0;
}
