int add(int a, int b) {
    return a + b;
}
int factorial(int n) {
    if (n < 0) {
        return -1;
    }
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    return 0;
}
