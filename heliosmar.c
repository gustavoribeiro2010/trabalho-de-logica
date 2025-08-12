#include <stdio.h>
#include <math.h>

int main() {
  float valor_emprestimo, taxa_juros_anual, taxa_juros_mensal, valor_parcela;
  int numero_parcelas;

  printf("=== Simulador de Empréstimo Bancário ===\n\n");

  // Entrada dos dados
  printf("Digite o valor do emprestimo (R$): ");
  scanf("%f", &valor_emprestimo);

  printf("Digite a taxa de juros anual (%%): ");
  scanf("%f", &taxa_juros_anual);

  printf("Digite o numero de parcelas: ");
    scanf("%d", &numero_parcelas);

 // Cálculo da taxa de juros mensal
 taxa_juros_mensal = taxa_juros_anual / 12 / 100;

 // Fórmula de amortização com parcelas fixas (juros compostos)
  valor_parcela = (valor_emprestimo * taxa_juros_mensal) /
(1 + taxa_juros_mensal, -numero_parcelas);

// Resultado
 printf("\nValor da parcela mensal: R$ %.2f\n", valor_parcela);
  return 0;
}