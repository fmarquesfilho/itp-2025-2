for (int x = 2; x <= 50000; x++) {
    if (primo(x) && primo(x+2) && primo(x+6)) {
        printf("(%d, %d, %d)\n", x, x+2, x+6);
    }
}