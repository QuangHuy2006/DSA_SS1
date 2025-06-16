#include <stdio.h>
void checkIfDuplicated() {
    int n = 10;
    int a[n] = {1, 2, 3, 1, 5, 6, 2, 8, 1, 0};
    int cnt[256] = {0};
    for (int i = 0; i < n; i++) {
        cnt[a[i]]++;
    }
    for (int i = 0; i < 256; i++) {
        if (cnt[i] > 1) {
        }
    }
}

int main() {
    checkIfDuplicated();
    return 0;
}
// do phuc tap thoi gian On
//do phuc tap ko gian On2
