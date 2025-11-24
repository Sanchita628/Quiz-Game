# Quiz-Game
# 🎮 Quiz Game (C Language)

The **Quiz Game** is a simple and interactive console-based application written in C.  
It asks multiple-choice questions, takes user input, checks answers, calculates the score, and displays a final evaluation.  
This project is perfect for beginners learning C programming.

---

## ✨ Features

- 5 multiple-choice questions  
- Accepts A/B/C/D (uppercase or lowercase)  
- Instant feedback: Correct / Wrong  
- Score calculation  
- Final rating based on performance  
- Clean and beginner-friendly code  

---

## 📂 How It Works

The game uses a function called `askQuestion()`:

- Displays a question and four options  
- Takes the user's answer  
- Checks correctness (supports lowercase)  
- Increases score if correct  

This avoids repeating code and keeps the program organized.

---

## ▶️ How to Run the Program

### 1. Compile the code:
```bash
gcc quiz.c -o quiz
2. Run the executable:
bash
Copy code
./quiz
📸 Example Output
markdown
Copy code
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

Your total score: 4 / 5
Good job! 🙂
📁 Project Structure
quiz-game/
 ├── quiz.c        // Main program source code
 └── README.md     // Documentation

🚀 Future Improvements

Add more questions

Make a menu (Start / Instructions / Exit)

Add color-coded terminal text

Randomize question order

Read questions from a file

🤝 Contributing

Feel free to improve this project!
Pull requests and suggestions are welcome.
