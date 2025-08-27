# Lista de Exercícios - Semana 2
## Variáveis, Tipos e Operadores
**Introdução a Técnicas de Programação (2025.2)**

### Problema 1 - Calculadora de IMC
Crie um programa que leia o peso (em kg) e a altura (em metros) de uma pessoa e calcule seu Índice de Massa Corporal (IMC). O programa deve declarar todas as variáveis com tipos apropriados (float) e exibir o resultado com 2 casas decimais.

**Fórmula:** IMC = peso / (altura²)

### Problema 2 - Conversão de temperatura
Desenvolva um programa que leia uma temperatura em graus Celsius e converta para Fahrenheit e Kelvin. Use variáveis do tipo float e exiba os resultados com 1 casa decimal.

**Fórmulas:**
- Fahrenheit = (Celsius × 9/5) + 32
- Kelvin = Celsius + 273.15

### Problema 3 - Cálculo de juros compostos
Escreva um programa que leia o capital inicial, a taxa de juros (em porcentagem) e o tempo (em anos). Calcule e exiba o montante final usando a fórmula de juros compostos. Declare as variáveis com tipos apropriados.

**Fórmula:** Montante = Capital × (1 + taxa/100)^tempo

*Dica: Use a função pow() da biblioteca math.h*

### Problema 4 - Operações aritméticas básicas
Crie um programa que leia dois números inteiros e exiba:
- A soma dos números
- A diferença (primeiro menos segundo)
- O produto
- A divisão real (resultado em float)
- O resto da divisão inteira
- A média aritmética

## **Observações Gerais**

1. **Tipos de variáveis**: Use int para números inteiros e float para números com decimais.

2. **Entrada e saída**: Use scanf() para leitura e printf() para exibição. Lembre-se dos especificadores corretos (%d, %f).

3. **Validação**: Alguns problemas podem exigir validação de entrada (verificar se valores são positivos, se caracteres estão corretos, etc.).

4. **Bibliotecas**: Para usar funções matemáticas como pow() e sqrt(), inclua `#include <math.h>` e compile com a flag -lm.

5. **Boas práticas**: 
   - Use nomes descritivos para variáveis
   - Comente seu código quando necessário
   - Mantenha a indentação consistente
   - Teste seu programa com diferentes valores de entrada
