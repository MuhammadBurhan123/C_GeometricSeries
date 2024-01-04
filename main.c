#include <stdio.h>

int main() {
    int firstTerm, commonRatio, numTerms;

    // Get user input
    printf("Enter the first term: ");
    scanf("%d", &firstTerm);

    printf("Enter the common ratio: ");
    scanf("%d", &commonRatio);

    printf("Enter the number of terms: ");
    scanf("%d", &numTerms);

    // Display the generated series
    printf("Geometric Series: ");

    for (int i = 0; i < numTerms; ++i) {
        printf("%d", firstTerm);

        if (i < numTerms - 1) {
            printf(", ");
        }

        firstTerm *= commonRatio;
    }

    printf("\n");

    return 0;
}
