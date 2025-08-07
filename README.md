# 🚀 Rocket Δv Calculator

> Calculate the total Δv (delta-V) produced by a multistage launch vehicle—stage by stage.

---

## ✨ Description

**Rocket Δv Calculator** is a tiny **C** program that:

1. 🛢️ Lets you enter the number of propellant containers of every size for the stage.  
2. 🔧 Lets you enter the number of active thrusters of each size.  
3. ⚖️ Asks for the total spacecraft mass **at the start** of that stage.  
4. 🧮 Computes the stage’s average specific impulse (Isp) and its Δv via the Tsiolkovsky equation.  
5. ➕ Adds that Δv to a running mission total, then offers to add another stage.  

---

## 🚀 Features

- 🌐 Language-agnostic console prompts (English).  
- 📊 Weighted-average Isp calculation from thrust and mass flow.  
- 🔄 Unlimited number of stages—stop whenever you like.  
- ⚡ Fast single-file program written in standard C (C99).  

---

## 📁 File list

| File          | Purpose          |
|---------------|------------------|
| `rocket_dv.c` | Main source code |
| `README.md`   | Project docs     |

---

## 🛠️ Build

```bash
gcc -Wall -O2 -o rocket_dv rocket_dv.c -lm
