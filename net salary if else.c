#include <stdio.h>

int main() {
    float gross, allowances, deductions, net;

    // Input gross salary
    printf("Enter Gross Salary: ");
    scanf("%f", &gross);

    if (gross > 10000) {
        allowances = 0.10 * gross;   // 10% allowance
        deductions = 0.03 * gross;   // 3% deduction
    }
    else if (gross > 5000) {
        allowances = 0.07 * gross;   // 7% allowance
        deductions = 0.02 * gross;   // 2% deduction
    }
    else {
        allowances = 0;   // no allowance
        deductions = 0;   // no deduction
    }

    net = gross + allowances - deductions;

    printf("Net Salary = %.2f\n", net);

    return 0;
}

