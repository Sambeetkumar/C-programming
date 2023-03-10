#include <stdio.h>
#include <math.h>

double f(double x) {
    // Define your function here
    return (pow(x,3)-5*x+3);
}

double fprime(double x) {
    // Define the derivative of your function here
    return (3*pow(x,2)-5);
}

double newton_raphson(double x0, int max_iter) {
    double x1;
    int i;
    for (i = 0; i < max_iter; i++) {
        x1 = x0 - f(x0)/fprime(x0);
        printf("At iteration no. %3d, x = %9.6f\n", i+1, x1);
        if (fabs(x1 - x0) < 0.0001) { // Check for convergence
            printf("Converged in %d iterations\n", i+1);
            return x1;
        }
        x0 = x1;
    }
    printf("Maximum iterations reached\n");
    return x1;
}

int main() {
    double x0;
    int max_iter;
    printf("Enter initial guess: ");
    scanf("%lf", &x0);
    printf("Enter maximum number of iterations: ");
    scanf("%d", &max_iter);
    double root = newton_raphson(x0, max_iter);
    printf("Root: %lf\n", root);
    return 0;
}