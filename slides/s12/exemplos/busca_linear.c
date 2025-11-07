int busca_linear(int arr[], int n, int alvo) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == alvo) {
            return i;
        }
    }
    return -1;
}