//���2316���Ž�
#include <stdio.h>
#include <math.h>

int main() {
    int arr[256];
    for (int i = 1; i < 1000; i++) {
        for (int j = 0; j < i; j++) {
            if (i % j == 0) {
                int f = 0;
                arr[f] = j;
                f++;
            }
        }
    }
    return 0;
}