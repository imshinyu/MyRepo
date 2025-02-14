#include <stdio.h>
#include <stdlib.h>

int main() {
    int restart;
    
    do {
        float grade = 0, tp;
        int coefficient[7] = {4, 3, 4, 3, 2, 1, 1};
        char *subject[7] = {"Algo", "Algebra", "Analysis", "Struct", "Component", "English", "French"};
        float m_exam[7] = {0}, f_exam[7] = {0}, weighted_score[7] = {0};

        for (int i = 0; i < 5; i++) {
            printf("Mid-term exam grade for %s: ", subject[i]);
            scanf("%f", &m_exam[i]);
        }

        for (int i = 0; i < 7; i++) {
            printf("Final Exam grade for %s: ", subject[i]);
            scanf("%f", &f_exam[i]);
        }

        printf("TP grade of Algo: ");
        scanf("%f", &tp);

        for (int i = 0; i < 7; i++) {
            if (i == 0) { // Algo has TP grade
                weighted_score[i] = (f_exam[i] * 0.6) + (m_exam[i] * 0.2) + (tp * 0.2);
            } else if (i < 5) { // Subjects with mid-term and final grades
                weighted_score[i] = (f_exam[i] * 0.6) + (m_exam[i] * 0.4);
            } else { // Subjects with only final grades
                weighted_score[i] = f_exam[i];
            }
            printf("The grade of %s: %.2f\n", subject[i], weighted_score[i]);
        }

        int total_coefficients = 0;
        for (int i = 0; i < 7; i++) {
            grade += weighted_score[i] * coefficient[i];
            total_coefficients += coefficient[i];
        }

        grade /= total_coefficients;

        printf("The final grade of the semester is: %.2f\n", grade);

        printf("\nDo you want to restart? (1 for Yes, 0 for No): ");
        scanf("%d", &restart);

    } while (restart == 1);

    printf("Thank you! Exiting the program.\n");
    return 0;

}
