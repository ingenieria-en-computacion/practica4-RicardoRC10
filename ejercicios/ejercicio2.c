#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n;
    printf("Ingrese el número de filas: ");
    scanf("%i", &m);
    printf("Ingrese el número de columnas: ");
    scanf("%i", &n);

    int *matrix = (int *)calloc(m * n, sizeof(int));
    if (matrix == NULL) {
        printf("Error: No se pudo asignar memoria.\n");
        
    }

    printf("Matriz inicializada con ceros:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%p\t", (matrix + i + j));
        }
        printf("\n");
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", *(matrix + i + j));
        }
        printf("\n");
    }

    printf("Ingrese las coordenadas (fila, columna) y el valor para modificar (ej. 1 2 5):\n");
    int row, col, value;
    //lee los varlores solicitados
    printf("Ingrese el número de filas: ");
    scanf("%i", &row);
    printf("Ingrese el número de columnas: ");
    scanf("%i", &col);
    printf("Ingrese el valor ");
    scanf("%i", &value);
    matrix[(row-1) + (col-1)] = value;

    printf("Matriz actualizada:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", *(matrix + i + j));
        }
        printf("\n");
    }

    free(matrix);
    return 0;
}
