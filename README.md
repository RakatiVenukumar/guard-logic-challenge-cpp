# 🧩 Guard Logic Challenge – C++ Solution

## 📌 Problem Overview
This project implements a decision system for a secured facility with three possible outcomes:
- Safe Exit
- Trap
- Return to Starting Point

## 🎯 Approach
The system is designed using three input conditions:
- hasAccess (authorization)
- isSafe (environment status)
- isLocked (system lock state)

### Decision Logic
- If hasAccess && isSafe && !isLocked → Safe Exit
- If !isSafe && isLocked → Trap
- Otherwise → Return to Start

## 🧠 Design Choices
- Used enum class for type safety
- Modular functions for clean structure
- Simple and readable logic

## 💻 How to Run

```bash
g++ main.cpp -o main
./main
