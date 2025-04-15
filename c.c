// #include <stdio.h>
// #include <math.h>

// // Function to calculate factorial
// long long factorial(int n) {
//     long long result = 1;
//     for (int i = 1; i <= n; i++) {
//         result *= i;
//     }
//     return result;
// }

// // Function to calculate binomial coefficient
// long long binomialCoeff(int n, int k) {
//     return factorial(n) / (factorial(k) * factorial(n - k));
// }

// // Function to calculate binomial expansion
// void binomialExpansion(int n, int x) {
//     for (int k = 0; k <= n; k++) {
//         long long coeff = binomialCoeff(n, k);
//         printf("%lld * x^%d ", coeff, k);
//         if (k != n) {
//             printf("+ ");
//         }
//     }
//     printf("\n");
// }

// int main() {
//     int n, x;
//     printf("Enter the value of n: ");
//     scanf("%d", &n);
//     printf("Enter the value of x: ");
//     scanf("%d", &x);

//     printf("Binomial expansion for (1 + x)^%d is:\n", n);
//     binomialExpansion(n, x);

//     return 0;
// }


