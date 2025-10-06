# 🎯 Number Cracker

**Version:** 1.0.0
**Language:** C (ISO C99)
**Platform:** Cross-platform (Windows / Linux / macOS)
**Executable Size:** ~140 KB
**Source Code Size:** ~2 KB
**License:** MIT

---

## 📘 Overview

**Number Cracker** is a C-based console game that challenges players to guess a random number between **1 and 100**.
It features **robust input validation**, **attempt tracking**, and an **interactive replay system**, making it a fun and educational mini project for beginners exploring **C programming fundamentals**.

This release marks the **base version (v1.0.0)**.

The format is based on [**Keep a Changelog 1.1.0**](https://keepachangelog.com/en/1.1.0/)
and this project adheres to [**Semantic Versioning 2.0.0**](https://semver.org/).

---

## ⚙️ Features & Technical Highlights

* 🔢 **Random Number Generation** – Picks a random number between 1 and 100 for each round
* ✅ **Input Validation** – Detects invalid inputs (non-numeric, out-of-range values)
* 🧠 **Hint System** – Provides *Higher* or *Lower* clues to guide players
* 🔄 **Replay Option** – Lets the player continue multiple rounds without restarting
* 🧮 **Attempt Counter** – Displays total guesses before success
* 🧱 **Single-File Implementation** – Clean, modular design with simple control flow
* 💻 **Cross-Platform Compatibility** – Works on Windows, Linux, and macOS
* ⚡ **Minimal Dependencies** – Standard C library only

---

## 🧱 Installation & Compilation

```bash
# Clone this repository
git clone https://github.com/dipsana/number-cracker.git
cd number-cracker

# Compile using GCC
gcc -o number_cracker main.c

# Run the executable
./number_cracker
```

---

## 🧭 Gameplay Instructions

1. Run the executable in your terminal.
2. Enter your guess (a number between **1 and 100**).
3. The program will tell you whether the correct number is **higher** or **lower**.
4. Continue guessing until you find the correct number.
5. You’ll see your **total attempts**, and can choose to play again (`y` or `n`).

---

## 🧾 Sample Output

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

## 🚀 Roadmap / Future Enhancements

* Add difficulty levels (Easy / Medium / Hard)
* Implement a leaderboard for best scores
* Add colored terminal output (ANSI formatting)
* Include sound effects and animation for wins
* Convert to GUI (using SDL or Raylib)

---

## 🧾 Version History

| Version | Date       | Description             |
| ------- | ---------- | ----------------------- |
| 1.0.0   | 2025-10-06 | Base release (SRS done) |

---

## 📜 License

This project is licensed under the [MIT License](LICENSE).

---

> *“Precision, patience, and persistence — every guess counts.”* 🎯

---

**Versioning:** This project adheres to [Semantic Versioning 2.0.0](https://semver.org/).  
**Changelog Format:** Based on [Keep a Changelog](https://keepachangelog.com/en/1.1.0/).
