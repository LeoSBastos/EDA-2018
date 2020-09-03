typedef struct cel Celula;

Celula* cel_cria();

Celula* busca_ultimo(Celula* cel);

Celula* cel_insere (Celula* cel, int info);

void cel_imprime (Celula* cel);

int cel_vazia (Celula* cel);

Celula* busca (Celula* cel, int v);

Celula* cel_retira (Celula* cel, int info);

void cel_libera (Celula* cel);

Celula* cel_insere_ordenado (Celula* cel, int info);
