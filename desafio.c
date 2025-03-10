#include <stdio.h>

int main(){
    char inicial = "G";
    char código[20] = "G01";
    char nome[20] = "GOIÁS";
    int população = 6315900;
    float área = 15244.19;
    float PIB = 765.233;
    int turísticos = 43;

    printf("inicial: %s\n", inicial);
    printf("código: %s\n", código);
    printf("nome: %s\n", nome);
    printf("população: %d\n", população);
    printf("área: %.2f KM²\n", área);
    printf("PIB: %.2f Bilhões\n", PIB);
    printf("turísticos: %d\n", turísticos);

}
