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
  <img src="https://github.com/user-attachments/assets/4af00248-304c-414d-a385-700a8e635249" width="150" height="388" alt="imagen1" />
  <!-- Añade aquí más <img> si hiciera falta -->
</div>

The first thing to do is check which propellants are used in that stage, but only those that will be discarded during this phase—that is,
the two on the sides—since their fuel will run out first. In this case we have in total 2 Large propellants.

<div align="left">
  <img src="https://github.com/user-attachments/assets/23a5b6a4-1651-4a22-b539-510be71a9570" width="150" height="388" alt="imagen1" />
  <!-- Añade aquí más <img> si hiciera falta -->
</div>

Then we will execute the program an introduce that in this stage we have in total 2 Large propellants.

<div align="left">
<img width="394" height="238" alt="imagen" src="https://github.com/user-attachments/assets/a806d5d5-9301-446e-9dde-68df704d108b" />
</div>

Then we will specify how many thrusters of each type are active during this stage, in this case we have 2 Large (Hawk) 2 Medium (Valiant) and 1 (Kolibri).

<div align="left">
<img width="150" height="388" alt="imagen" src="https://github.com/user-attachments/assets/1b6380c2-74c5-4789-943c-2d1483bd5858" />
</div>

Then we will continue with the program to add the engines that are active in the stage ( 2 Large (Hawk) 2 Medium (Valiant) and 1 (Kolibri)).

<div align="left">
<img width="394" height="238" alt="imagen" src="https://github.com/user-attachments/assets/32c8104d-d1d3-4437-83be-0fa80e367124" />
</div>

Then you will need to input the mass of the spaceship at the begining of the stage, this value of the mass is in here.

<div align="left">
<img width="150" height="388" alt="imagen" src="https://github.com/user-attachments/assets/cfe03979-870a-4d32-83b4-184148473f62" />
</div>

Finally, enter the value into the program and press enter. You'll see the delta V for this first stage and the total sum of all the other stages you've calculated.

<div align="left">
<img width="394" height="258" alt="imagen" src="https://github.com/user-attachments/assets/ce3ec39b-22b0-4c33-8495-cee44bce63e9" />
</div>
Now yo simply need to hit number 1 and enter to calculate the next stage, and for this you will need to remove the first stage, and the ship will end like this.
<img width="150" height="388" alt="imagen" src="https://github.com/user-attachments/assets/935f6ecf-c7f5-4258-bbd2-1af640a55daa" />

---
## 🛠️ Build

```bash
gcc -Wall -O2 -o rocket_dv rocket_dv.c -lm

---
