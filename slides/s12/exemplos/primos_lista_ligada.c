// Implementacao com lista ligada para reduzir operacoes de escrita
typedef struct Node {
    int value;
    bool is_prime;
    struct Node* next;
} Node;

// Funcao para criar um novo no
Node* create_node(int value, bool is_prime) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->value = value;
    new_node->is_prime = is_prime;
    new_node->next = NULL;
    return new_node;
}

// Inicializa lista com primeiros 7 numeros
for (int i = 2; i <= 8; i++) {
    bool prime = is_prime(i);
    Node* new_node = create_node(i, prime);
    // Adiciona a lista...
}