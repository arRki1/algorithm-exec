#include <cstdio>
#include <algorithm>
#include <queue>
#include <vector>
#include <map>
using namespace std;

typedef struct {
    int from;
    int to;
    double mp;
}Magic;

typedef struct Payment{
    int aim;
    double payment;
}Payment;

vector<Magic> magics;

int n, m;
double e;

void getenv() {
    scanf("%d%d%lf", &n, &m, &e);
    int from, to;
    double mp;
    for(int i = 0; i < m; ++i) {
        scanf("%d%d%lf", &from, &to, &mp);
        magics.push_back({from, to, mp});
    }
}

int main() {
    getenv();

    for(auto magic = magics.cbegin(); magic != magics.cend(); ++magic) {
        printf("%d\t%d\t%.1lf\n", (*magic).from, (*magic).to, (*magic).mp);
    }

    return 0;
}