
#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int lista[3] = {a, b, c};
    int normal[3];
    for (int i = 0; i < 3; i++) {
        normal[i] = lista[i];
    }

    bubbleSort(normal, 3);

    for (int i = 0; i < 3; i++) {
        printf("%d\n", normal[i]);
    }
    printf("\n");
    for (int i = 0; i < 3; i++) {
        printf("%d\n", lista[i]);
    }

    return 0;
}