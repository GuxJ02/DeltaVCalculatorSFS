# 🚀 SFS Δv Calculator

> Calculate the total Δv (delta-V) produced by a multistage launch vehicle—stage in the movile game app.

---

## ✨ Description

**Rocket Δv Calculator** is a tiny **C** program that helps you to calculate the Δv of a rocket to be able to design and plan misions in the game

---

## 📁 File list

| File          | Purpose          |
|---------------|------------------|
| `Delta V.c`   | Main source code |
| `README.md`   | Project docs     |
| `Delta V.exe` | Executable       |

---
## 📝 How to use it
To understand how to use it lets make an example. Lets say we want to analize the Delta V of this spaceship:

<div align="left">
  <img src="https://github.com/user-attachments/assets/4af00248-304c-414d-a385-700a8e635249" width="105" height="272" alt="imagen1" />
  <!-- Añade aquí más <img> si hiciera falta -->
</div>
The first thing to do is check which propellants are used in that stage, but only those that will be discarded during this phase—that is,
the two on the sides—since their fuel will run out first. In this case we have in total 2 Large propellants.
<div align="left">
  <img src="https://github.com/user-attachments/assets/23a5b6a4-1651-4a22-b539-510be71a9570" width="210" height="544" alt="imagen1" />
  <!-- Añade aquí más <img> si hiciera falta -->
</div>
Then we will execute the program an introduce that in this stage we have in total 2 Large propellants
<div align="left">
<img width="787" height="436" alt="imagen" src="https://github.com/user-attachments/assets/a806d5d5-9301-446e-9dde-68df704d108b" />
</div>
Then we will specify how many thrusters of each type are active during this stage, in this case we have 2 Large (Hawk) 2 Medium (Valiant) and 1 (Kolibri)
<div align="left">
<img width="210" height="544" alt="imagen" src="https://github.com/user-attachments/assets/1b6380c2-74c5-4789-943c-2d1483bd5858" />
</div>
---
## 🛠️ Build

```bash
gcc -Wall -O2 -o rocket_dv rocket_dv.c -lm

---
