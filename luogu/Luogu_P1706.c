#include <stdio.h>

int n, arr[10] = {0};

void dfs(int i, int visited) {
    if(i == n + 1) {
        for(int k = 1; k <= i - 1; ++k) {
            printf("%5d", arr[k]);
        }
        printf("\n");
    }

    if(i <= n) {
        for(int j = 1; j <= n; ++j) {
            if(visited & (1 << j))  continue;
            arr[i] = j;
            dfs(i + 1, visited ^ (1 << j));
        }
    }
}

int main() {
    scanf("%d", &n);
    dfs(1, 0);

    return 0;
}