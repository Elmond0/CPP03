*This project has been created as part of the 42 curriculum by elmondo.*

# <img align="middle" height="115" src="https://raw.githubusercontent.com/ayogun/42-project-badges/main/badges/numbered_cpps/CPP03.png" alt="CPP03 badge"/> <picture><source media="(prefers-color-scheme: dark)" srcset="https://readme-typing-svg.demolab.com/?font=Fira+Code&weight=600&size=55&pause=1000&color=58A6FF&vCenter=true&width=400&height=80&lines=CPP03"><source media="(prefers-color-scheme: light)" srcset="https://readme-typing-svg.demolab.com/?font=Fira+Code&weight=600&size=55&pause=1000&color=0366D6&vCenter=true&width=400&height=80&lines=CPP03"><img align="middle" src="https://readme-typing-svg.demolab.com/?font=Fira+Code&weight=600&size=55&pause=1000&color=0366D6&vCenter=true&width=400&height=80&lines=CPP03" alt="CPP03"/></picture>

[![Common Core](https://img.shields.io/badge/-Common%20Core-24292e?style=flat&logo=data:image/svg%2Bxml;base64,PHN2ZyByb2xlPSJpbWciIHZpZXdCb3g9IjAgMCAyNCAzNCIgeG1sbnM9Imh0dHA6Ly93d3cudzMub3JnLzIwMDAvc3ZnIj48dGl0bGU+NDI8L3RpdGxlPjxkZXNjPkxvZ28gNDIgY29uIHBhZGRpbmcgaW5mZXJpb3JlOiBHaXRIdWIgcmltdW92ZSBnbGkgYXR0cmlidXRpIHN0eWxlIGRhbCBtYXJrZG93biwgcXVpbmRpIGlsIG1hcmdpbmUgY2hlIGFsbGluZWEgbCdpY29uYSBhbCB0ZXN0byBkZWwgdGl0b2xvIGUnIGluY29ycG9yYXRvIG5lbCB2aWV3Qm94LiBJbCBnbGlmbyBvY2N1cGEgeSAzLjU3NC0yMC40MjYgZSBzb3R0byByZXN0YW5vIDEzLjU3NCB1bml0YScgdnVvdGU6IHJlc28gYSA0MnB4IGNvbiBhbGlnbj1taWRkbGUsIGlsIGdsaWZvIHN0YSB+MnB4IHNvcHJhIGxhIGJhc2VsaW5lIGRlbCB0aXRvbG8uIFBlciBhbHphcmxvIGFuY29yYSBzZXJ2b25vICsxIHVuaXRhJyBkaSB2aWV3Qm94IG9nbmkgKzEuMnB4IGRpIGhlaWdodCAoY2lyY2EgKzAuNnB4IGRpIHNvbGxldmFtZW50bywgYSBwYXJpdGEnIGRpIGRpbWVuc2lvbmUgZGVsIGdsaWZvKS48L2Rlc2M+PHN0eWxlPnBhdGh7ZmlsbDojMDAwMDAwfSBAbWVkaWEgKHByZWZlcnMtY29sb3Itc2NoZW1lOmRhcmspe3BhdGh7ZmlsbDojRkZGRkZGfX08L3N0eWxlPjxwYXRoIGQ9Ik0xOS41ODEgMTYuODUxSDI0di00LjQzOVpNMjQgMy41NzRoLTQuNDE5djQuNDJsLTQuNDE5IDQuNDE4djQuNDRoNC40MTl2LTQuNDRMMjQgNy45OTNabS00LjQxOSAwaC00LjQxOXY0LjQyem0tNi4zMjQgOC44MzhINC40MTlsOC44MzgtOC44MzhIOC44MzhMMCAxMi40MTJ2My41OTVoOC44Mzh2NC40MTloNC40MTl6Ii8+PC9zdmc+Cg==)](https://profile.intra.42.fr/users/elmondo)
![Language](https://img.shields.io/badge/language-C%2B%2B98-blue)
![Flags](https://img.shields.io/badge/flags--Wall%20--Wextra%20--Werror-passing-brightgreen)
![Valgrind](https://img.shields.io/badge/valgrind-no%20leaks-brightgreen)

> Inheritance: a robot hierarchy where each derived class specializes its parent's behavior.

---

## 📖 Description

`CPP03` is Module 03 of the 42 **C++ modules**. Every exercise is written in **C++98** and compiled with `c++ -Wall -Wextra -Werror -std=c++98`.

What this module covers:

- Single inheritance and `protected` members
- Constructor / destructor call order in a hierarchy
- Overriding behavior in derived classes
- Orthodox Canonical Form applied to derived classes

---

## 🗂️ Exercises

| Directory | Exercise | Executable | Description |
|:---------:|----------|:----------:|-------------|
| `ex00` | Aaaaand... OPEN! | `ClapTrap` | `ClapTrap` with hit points, energy points and attack damage; `attack`, `takeDamage`, `beRepaired`. |
| `ex01` | Serena, my love! | `ScavTrap` | `ScavTrap` inherits from `ClapTrap`, with its own stats and `guardGate()`. |
| `ex02` | Repetitive work | `FragTrap` | `FragTrap` inherits from `ClapTrap`, with `highFivesGuys()`. |

---

## ⚙️ Compilation & Usage

Each exercise is independent and has its own `Makefile`:

```bash
make        # build the executable
make clean  # remove object files
make fclean # remove object files and the executable
make re     # fclean + make
```

**`ex00` — Aaaaand... OPEN!**
```bash
cd ex00 && make
./ClapTrap
```

**`ex01` — Serena, my love!**
```bash
cd ex01 && make
./ScavTrap
```

**`ex02` — Repetitive work**
```bash
cd ex02 && make
./FragTrap
```

---

## 📁 Project Structure

```
CPP03/
├── ex00/
│   ├── ClapTrap.cpp
│   ├── ClapTrap.hpp
│   ├── main.cpp
│   └── Makefile
├── ex01/
│   ├── ClapTrap.cpp
│   ├── ClapTrap.hpp
│   ├── ScavTrap.cpp
│   ├── ScavTrap.hpp
│   ├── main.cpp
│   └── Makefile
└── ex02/
    ├── ClapTrap.cpp
    ├── ClapTrap.hpp
    ├── FragTrap.cpp
    ├── FragTrap.hpp
    ├── ScavTrap.cpp
    ├── ScavTrap.hpp
    ├── main.cpp
    └── Makefile
```

---

## 📚 Resources

- [Inheritance — cppreference](https://en.cppreference.com/w/cpp/language/derived_class)
- [Learn C++ — inheritance](https://www.learncpp.com/cpp-tutorial/introduction-to-inheritance/)
- `man 3 cout`, [GNU Make manual](https://www.gnu.org/software/make/manual/make.html)
- [Valgrind](https://valgrind.org/) — memory error and leak detector used for testing

---

## 🎯 Key Takeaways

- Seeing **construction/destruction order** play out in the output.
- Reusing code through **inheritance** while specializing behavior.
- Keeping the **Orthodox Canonical Form** consistent across a hierarchy.
