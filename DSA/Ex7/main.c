#include <stdio.h>
int checking() {
    int n[10]= {1,2,3,8,5,6,7,4,0,1};
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (n[i] == n[j] && j != i) {
                return 1;
            }
        }
    }
    return 0;
}
int main() {
    if (checking()) {
        printf("Yes");
    }else {
        printf("No");
    }
}
