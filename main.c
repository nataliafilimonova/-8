int main() {
    int n;
    printf("Введите целое N: ");
    scanf("%d", &n);

    double product = 1.0;
    for (int i = 1; i <= n; i++) {
        double term = 1.0 + i / 10.0; // Формируем 1.1, 1.2 и т.д.
        product *= term;
    }

    printf("Произведение ряда: %lf\n", product);
    return 0;
}
