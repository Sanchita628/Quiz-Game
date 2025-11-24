#include <stdio.h>

void askQuestion(char question[], char optionA[], char optionB[], char optionC[], char optionD[], char correctOption, int *score) {
    char answer;

    printf("\n%s\n", question);
    printf("A. %s\n", optionA);
    printf("B. %s\n", optionB);
    printf("C. %s\n", optionC);
    printf("D. %s\n", optionD);
    printf("Your answer: ");
    scanf(" %c", &answer);

    if (answer == correctOption || answer == correctOption + 32) {   
        // +32 handles lowercase answers
        printf("Correct!\n");
        (*score)++;
    } else {
        printf("Wrong! Correct answer is %c\n", correctOption);
    }
}

int main() {
    int score = 0;

    printf("=====================================\n");
    printf("         WELCOME TO QUIZ GAME        \n");
    printf("=====================================\n");

    askQuestion(
        "1. What is the capital of France?",
        "Berlin",
        "Madrid",
        "Paris",
        "Rome",
        'C',
        &score
    );

    askQuestion(
        "2. Who developed the C language?",
        "Dennis Ritchie",
        "James Gosling",
        "Bjarne Stroustrup",
        "Guido van Rossum",
        'A',
        &score
    );

    askQuestion(
        "3. Which data type is used to store characters?",
        "int",
        "float",
        "char",
        "double",
        'C',
        &score
    );

    askQuestion(
        "4. Which symbol is used to end a statement in C?",
        ":",
        ".",
        ";",
        ",",
        'C',
        &score
    );

    askQuestion(
        "5. Which loop is guaranteed to run at least once?",
        "for loop",
        "while loop",
        "do-while loop",
        "None of the above",
        'C',
        &score
    );

    printf("\n=====================================\n");
    printf("              QUIZ OVER              \n");
    printf("=====================================\n");
    printf("Your total score: %d / 5\n", score);

    if(score == 5)
        printf("Excellent! 🎉\n");
    else if(score >= 3)
        printf("Good job! 🙂\n");
    else
        printf("Keep practicing! 👍\n");

    return 0;
}
