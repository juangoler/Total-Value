#include <stdio.h>

int main() {
    
    float valor;              
    float totalVista = 0;     
    float totalPrazo = 0;     
    float totalGeral = 0;    
    char codigo;   

    for (int i = 0; i < 15; i++) {
    printf("Digite o código (V para à vista e P para a prazo) e o valor da transação %d: ", i + 1);
    scanf(" %c %f", &codigo, &valor);

    if (codigo == 'V' || codigo == 'v') {
        totalVista += valor;
    } else if (codigo == 'F' || codigo == 'f') {
        totalPrazo += valor;
    } else {
    printf("Código inválido. Tente novamente.\n");
            i--;  
            continue;
    } 

printf("\nTotal das compras à vista: R$ %.2f\n", totalVista);
printf("\nTotal das compras a prazo: R$ %.2f\n", totalVista);
printf("\nTotal das compras: R$ %.2f\n", totalVista);
    return 0;
    }
}