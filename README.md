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
  <img src="https://github.com/user-attachments/assets/4af00248-304c-414d-a385-700a8e635249" width="210" height="544" alt="imagen1" />
  <!-- Añade aquí más <img> si hiciera falta -->
</div>
Lo primero que habría que hacer es mirar que combustibles se utilizan en esa etapa, pero unicamente los que se van a soltar en esta etapa es decir los dos que tenemos en los laterales ya que su
combustible se acabara lo primero
<div align="left">
  <img src="https://github.com/user-attachments/assets/23a5b6a4-1651-4a22-b539-510be71a9570" width="210" height="544" alt="imagen1" />
  <!-- Añade aquí más <img> si hiciera falta -->
</div>

---
## 🛠️ Build

```bash
gcc -Wall -O2 -o rocket_dv rocket_dv.c -lm

---
