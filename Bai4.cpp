#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    printf("Enter number:");
    scanf("%d", &n);

    //    Cách 1:
    for(int i = 1; i <= n; i++) {
        sum += i;    // Độ phức tạp O(n)
    }

    //    Cách 2:
    sum = (n * (n + 1)) / 2;    //    Độ phức tạp O(1)

    printf("Sum of %d: %d\n", n, sum);
}