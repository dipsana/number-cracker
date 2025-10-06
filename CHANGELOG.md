# 📜 Changelog

All notable changes to this project will be documented in this file.

The format is based on [**Keep a Changelog 1.1.0**](https://keepachangelog.com/en/1.1.0/)
and this project adheres to [**Semantic Versioning 2.0.0**](https://semver.org/).

---

## \[1.0.0] – 2025-10-06

### 🎯 Added

* Initial release of **Number Cracker** (Base version).
* Implemented **random number generator** (1–100).
* Added **user input validation** for non-numeric and out-of-range inputs.
* Added **hint system** (“Higher” or “Lower”).
* Implemented **attempt counter** for performance tracking.
* Included **play-again prompt** with input sanitization.
* Developed **cross-platform support** (Windows, Linux, macOS).
* Added **IEEE-style SRS document** in `/docs/`.
* Added project structure and documentation files:

  * `/bin/number_cracker.exe`
  * `/src/main.c`
  * `/docs/srs.pdf`
  * `CHANGELOG.md`
  * `LICENSE`
  * `README.md`

---

### 🧩 Known Limitations

* No difficulty selection yet (Easy/Medium/Hard).
* No persistent scoring or leaderboard system.
* Input is line-buffered — pressing *Enter* is required after every guess.

---

## 📅 Next Planned Update

**Version 1.1.0** — *“Challenge Mode”*

* Add difficulty tiers.
* Implement colored output and score tracking.
* Improve replay prompt handling.
