int janela[7];
for (int i = 0; i < 7; i++) {
    janela[i] = primo(inicio + i);
}

for (int x = inicio; x <= 50000; x++) {
    if (janela[0] && janela[2] && janela[6]) {
        printf("(%d, %d, %d)\n", x, x+2, x+6);
    }
    // Atualiza janela
    for (int i = 0; i < 6; i++) {
        janela[i] = janela[i+1];
    }
    janela[6] = primo(x + 7);
}