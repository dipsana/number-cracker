# 🎯 Number Cracker

**Version:** 1.0.0  
**Language:** C (ISO C99)  
**Platform:** Cross-platform (Windows / Linux / macOS)  
**Executable Size:** ~140 KB  
**Source Code Size:** ~2 KB  
**License:** MIT

---

## Overview

**Number Cracker** is a C-based console game that challenges players to guess a randomly generated number between **1 and 100**.

It features robust input validation, attempt tracking, and an interactive replay system, making it a simple and educational project for beginners exploring C programming fundamentals.

This release marks the initial stable version (v1.0.0).

This project follows [Semantic Versioning 2.0.0](https://semver.org/). Its changelog format is based on [Keep a Changelog 1.1.0](https://keepachangelog.com/en/1.1.0/).

---

## Features & Technical Highlights

- **Random Number Generation** – Generates a random number between 1 and 100 for each round.
- **Input Validation** – Detects invalid inputs, including non-numeric and out-of-range values.
- **Hint System** – Provides higher or lower clues to guide players.
- **Replay Option** – Allows multiple rounds without restarting the application.
- **Attempt Counter** – Displays the total number of guesses required to find the correct number.
- **Single-File Implementation** – Uses a simple, modular structure and straightforward control flow.
- **Cross-Platform Compatibility** – Supports Windows, Linux, and macOS.
- **Minimal Dependencies** – Uses the standard C library only.

---

## Installation & Compilation

### 1. Clone the repository

```bash
git clone https://github.com/dipsana/number-cracker.git
cd number-cracker
```

### 2. Compile using GCC

```bash
gcc -o number_cracker src/main.c
```

### 3. Run the executable

#### Linux / macOS

```bash
./number_cracker
```

#### Windows

```powershell
.\number_cracker.exe
```

---

## Gameplay Instructions

1. Run the executable in your terminal.
2. Enter a guess between **1 and 100**.
3. Follow the higher or lower hints provided by the program.
4. Continue guessing until you find the correct number.
5. View your total attempts and choose whether to play again (`y` or `n`).

---

## Sample Output

```text
Guess the number between 1 to 100
55
Lower number please!

Guess the number between 1 to 100
23
Higher number please!

Guess the number between 1 to 100
49

Great job! You cracked it after 3 attempts!

Do you want to play again? (y/n): n

Thanks for playing! See you next time...(>w<)
```

---

## 📁 Clickable Repository Structure

/  
├─ 📁 [bin](./bin)  
│   └─ 📄 [number_cracker.exe](./bin/number_cracker.exe)  
├─ 📁 [docs](./docs)  
│   └─ 📄 [SRS.pdf](./docs/SRS.pdf)  
├─ 📁 [src](./src)  
│   └─ 📄 [main.c](./src/main.c)  
├─ 📄 [CHANGELOG.md](./CHANGELOG.md)  
├─ 📄 [LICENSE](./LICENSE)  
└─ 📄 [README.md](./README.md)

---

## Roadmap / Future Enhancements

- Add difficulty levels (Easy / Medium / Hard).
- Implement a leaderboard for tracking best scores.
- Introduce colored terminal output using ANSI formatting.
- Include sound effects and animations for wins.
- Develop a graphical interface using SDL or Raylib.

---

## License

This project is licensed under the [MIT License](./LICENSE).

---

*Precision, patience, and persistence — every guess counts.*
