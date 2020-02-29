/*
**PAT A1001
*/
#include "iostream"
#include "string"
#include "algorithm"

int main() {
    int a, b;
    std::string sum;
    std::cin >> a >> b;
    sum = std::to_string(a + b);
    int len = sum.length();
    for (int i = 0; i < len; i++) {
        if(sum[i] == '-') {
            std::cout << sum[i];
            continue;
        }
        std::cout << sum[i];
        if((i + 1) % 3 == len % 3 && i != len - 1) {
            std::cout << ',';
        }
    }
    std::cout << std::endl;
    system("pause");
    return 0;
}
