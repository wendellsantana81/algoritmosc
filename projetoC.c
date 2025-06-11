#include <stdio.h>

int main() {
    // Variáveis para armazenar os valores
    float salario, outras_receitas, total_receitas;
    float alimentacao, moradia, transporte, educacao, lazer, outras_despesas, total_despesas;
    float saldo, percentual_despesas;
    
    // Entrada de dados - Receitas
    printf("=== ENTRADA DE RECEITAS ===\n");
    printf("Digite o valor do salario: R$ ");
    scanf("%f", &salario);
    printf("Digite o valor de outras receitas: R$ ");
    scanf("%f", &outras_receitas);
    
    // Cálculo do total de receitas
    total_receitas = salario + outras_receitas;
    
    // Entrada de dados - Despesas
    printf("\n=== ENTRADA DE DESPESAS ===\n");
    printf("Digite os gastos com alimentacao: R$ ");
    scanf("%f", &alimentacao);
    printf("Digite os gastos com moradia: R$ ");
    scanf("%f", &moradia);
    printf("Digite os gastos com transporte: R$ ");
    scanf("%f", &transporte);
    printf("Digite os gastos com educacao: R$ ");
    scanf("%f", &educacao);
    printf("Digite os gastos com lazer: R$ ");
    scanf("%f", &lazer);
    printf("Digite os gastos com outras despesas: R$ ");
    scanf("%f", &outras_despesas);
    
    // Cálculo do total de despesas
    total_despesas = alimentacao + moradia + transporte + educacao + lazer + outras_despesas;
    
    // Cálculo do saldo
    saldo = total_receitas - total_despesas;
    
    // Cálculo do percentual de despesas em relação às receitas
    percentual_despesas = (total_despesas / total_receitas) * 100;
    
    // Saída dos resultados
    printf("\n=== RESULTADOS ===\n");
    printf("Total de Receitas: R$ %.2f\n", total_receitas);
    printf("Total de Despesas: R$ %.2f\n", total_despesas);
    printf("Saldo: R$ %.2f\n", saldo);
    printf("Despesas representam %.2f%% das receitas\n", percentual_despesas);
    
    // Classificação da situação financeira
    printf("\n=== SITUACAO FINANCEIRA ===\n");
    if (saldo > 0) {
        printf("Parabens! Voce tem um superavit este mes.\n");
    } else if (saldo == 0) {
        printf("Voce esta em equilibrio financeiro.\n");
    } else {
        printf("Atencao! Voce esta com deficit este mes.\n");
    }
    
    // Recomendação baseada no percentual de despesas
    printf("\n=== RECOMENDACAO ===\n");
    if (percentual_despesas > 90) {
        printf("ALERTA: Suas despesas estao muito altas! Considere reduzir gastos.\n");
    } else if (percentual_despesas > 70) {
        printf("Cuidado: Suas despesas estao elevadas. Analise onde pode economizar.\n");
    } else if (percentual_despesas > 50) {
        printf("Sua situacao esta controlada, mas ha espaco para economias.\n");
    } else {
        printf("Otimo! Voce esta gastando menos do que ganha. Pode considerar investir.\n");
    }
    
    return 0;
}