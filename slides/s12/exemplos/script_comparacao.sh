#!/bin/bash
echo "=== COMPARACAO DE DESEMPENHO ==="

echo -e "\n1. Solucao Nao Otimizada:"
time ./primos_nao_otimizado > /dev/null

echo -e "\n2. Solucao Otimizada com Vetor:"
time ./primos_otimizado_vetor > /dev/null

echo -e "\n3. Solucao Otimizada com Lista:"
time ./primos_otimizado_lista > /dev/null