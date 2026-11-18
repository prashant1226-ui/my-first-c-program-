#include <stdio.h>

int main() {
    char name[50];
    int n, i;
    float marks, total = 0, average;

    // 1. Input Student Details
    printf("=== Student Grade Calculator ===\n");
    printf("Enter Student Name: ");
    scanf("%s", name);

    printf("Enter number of subjects: ");
    scanf("%d", &n);

    // 2. Loop to take marks for each subject
    for (i = 1; i <= n; i++) {
        printf("Enter marks for Subject %d (out of 100): ", i);
        scanf("%f", &marks);
        total = total + marks;
    }

    // 3. Calculate Average
    average = total / n;

    // 4. Display Result
    printf("\n--- Result ---\n");
    printf("Student Name: %s\n", name);
    printf("Total Marks : %.2f\n", total);
    printf("Average     : %.2f%%\n", average);

    // 5. Decide Grade using if-else
    if (average >= 90) {
        printf("Grade       : A+ (Outstanding)\n");
    } else if (average >= 75) {
        printf("Grade       : A (Distinction)\n");
    } else if (average >= 60) {
        printf("Grade       : B (First Class)\n");
    } else if (average >= 40) {
        printf("Grade       : C (Pass)\n");
    } else {
        printf("Grade       : F (Fail)\n");
    }

    return 0;
}