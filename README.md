📘 Exercism C Track Solutions

This repository contains my solutions to various exercises from the Exercism C Track.
Each folder represents one exercise and includes:

Question.txt – A brief description or summary of the exercise

.c and .h files – My solution implementation

main.c – A simple test program to demonstrate or manually test the solution

Additional configuration or helper files when needed


📂 Repository Layout

Each exercise is organized in its own directory and follows a consistent structure:

<exercise-name>/
│
├── <exercise>.c          # Implementation source file
├── <exercise>.h          # Public API definitions
├── main.c                # Minimal driver program for manual testing
└── Question.txt          # Original or summarized problem description

This layout provides:

Clear separation of interface (.h) and implementation (.c)

A simple test harness via main.c

Full independence between exercises (no shared state)

🔧 Build & Execution

Each exercise can be compiled individually.
Example:
gcc *.c -o main
./main

🎯 Goals of This Repository

This repository serves as a technical log of my work while improving proficiency in C:

✔ Strengthening Core C Concepts

Pointers, memory representation

Integer operations & bit manipulation

Control structures and edge-case handling

✔ Practicing Modular Architecture

Function-level encapsulation

Header–source separation

API-oriented design

✔ Building Comfort with Tooling

Git workflow

GCC compilation

Command-line based C development

✔ Maintaining Production-Quality Code

Even though these are training exercises, each solution targets:

Readability

Correctness

Maintainability

Minimalism (solving only what the problem requires)

📘 Disclaimer

These solutions are my personal implementations of Exercism problems.
They may differ from official or community solutions and are intended strictly for educational and reference purposes.
