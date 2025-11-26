# Quiz Game in C 🎮

## Introduction ✨

This project is a fully interactive, command-line based Quiz Game
written in the C programming language. It presents users with five
multiple-choice questions, evaluates their answers in real time, and
provides a polished end-of-quiz performance summary.

------------------------------------------------------------------------

## Key Features ⭐

-   **Case-insensitive answer handling** (accepts both uppercase and
    lowercase inputs)
-   **Instant correctness feedback** after each question
-   **Clean UI with structured formatting**
-   **Score tracking and performance evaluation**
-   Simple, readable, and modular code design

------------------------------------------------------------------------

## Project Structure 📂

    ├── quizgame.c      # Main source code
    └── README.md       # Project documentation

------------------------------------------------------------------------

## How the Program Works 🛠️

### 1. `askQuestion()` Function

Responsible for: - Displaying questions and options - Taking user
input - Validating correctness - Updating the score using pointer
reference

### 2. `main()` Function

-   Initializes the score counter
-   Calls `askQuestion()` for all quiz items
-   Displays the final scorecard
-   Shows an evaluation message based on performance

------------------------------------------------------------------------

## Compilation 🧱

``` bash
gcc quizgame.c -o quizgame
```

------------------------------------------------------------------------

## Execution ▶️

``` bash
./quizgame
```

------------------------------------------------------------------------

## Sample Console Output 📺

    =====================================
             WELCOME TO QUIZ GAME        
    =====================================
    1. What is the capital of France?
    A. Berlin
    B. Madrid
    C. Paris
    D. Rome
    Your answer: C
    Correct!

    ...
    =====================================
                  QUIZ OVER
    =====================================
    Your total score: 4 / 5
    Good job!

------------------------------------------------------------------------

## Customization Guide 🎨

You can extend or modify the game by: - Adding more questions via
additional `askQuestion()` calls - Introducing hints, difficulty levels,
or time limits - Splitting questions into separate modules or files -
Adding scoring logic for negative marking or bonus points

------------------------------------------------------------------------

## Requirements 📌

-   C compiler (GCC recommended)
-   Works on Windows, Linux, and macOS

------------------------------------------------------------------------

## Author 👤

Developed as a structured programming practice project.

------------------------------------------------------------------------

## License 📜

This project is free to use for educational and learning purposes.
## OUTPUT SCREENSHOT
![image alt](https://github.com/Sanchita628/Quiz-Game/blob/39f5c560474b64035e794ab6beb21fca7495e800/WhatsApp%20Image%202025-11-26%20at%2012.34.15%20PM.jpeg)
!{image alt}(image__url)
!{image alt}(image__url)
