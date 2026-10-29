
#include <stdio.h>

int main() {
    int score;
    char grade;

    printf("Enter your score: ");
    scanf("%d", &score);


    if (score < 0 || score > 100) {
        printf("Invalid score! Enter a score between 0 and 100.\n");
        return 0;
    }

    if (score >= 90) {
        grade = 'A';
    }
    else if (score >= 80) {
        grade = 'B';
    }
    else if (score >= 70) {
        grade = 'C';
    }
    else if (score >= 60) {
        grade = 'D';
    }
    else {
        grade = 'F';
    }

    printf("Your grade is %c. ", grade);


    switch (grade) {
        case 'A':
            printf("Excellent work!");
            break;

        case 'B':
            printf("Well done.");
            break;

        case 'C':
            printf("Good job.");
            break;

        case 'D':
            printf("You passed, but you could do better.");
            break;

        case 'F':
            printf("Sorry, you failed.");
            break;
    }


    if (grade >= 'A' && grade <= 'D') {
        printf(" You are eligible for the next level.\n");
    }
    else {
        printf(" Please try again next time.\n");
    }

    return 0;
}
