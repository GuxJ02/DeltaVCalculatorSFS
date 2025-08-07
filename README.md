# 🚀 SFS Δv Calculator

> Calculate the total Δv (delta-V) produced by a multistage launch vehicle—stage in Spaceflight Simulator.

---

## ✨ Description

**Rocket Δv Calculator** is a tiny **C** program that helps you calculate a rocket’s Δv so you can design and plan missions in the game.

⚠️ **IMPORTANT:** This is an old program made years ago. It can be improved a lot or rewritten in other languages, so feel free to submit a pull request if needed and ask anything you want.

**Reddit:**  [Reddit post](https://www.reddit.com/r/SpaceflightSimulator/comments/1mi7py1/i_built_this_2_years_ago_and_i_still_think_its/).

Video of a spaceship design that used this program: [Video](https://www.youtube.com/watch?v=kpIXlbYiQx0).

---

## 📁 File list

| File          | Purpose          |
|---------------|------------------|
| `Delta V.c`   | Main source code |
| `README.md`   | Project docs     |
| `Delta V.exe` | Executable       |

---
## 📝 How to use it
To understand how to use it, let's make an example. Let's say we want to analyze the Delta V of this spaceship:

<div align="left">
  <img src="https://github.com/user-attachments/assets/4af00248-304c-414d-a385-700a8e635249" width="150" height="388" alt="imagen1" />
</div>

The first thing to do is check which propellants are used in that stage—but only those that will be discarded during this phase, that is,
the two on the sides—since their fuel will run out first. In this case, we have a total of 2 Large propellants.

<div align="left">
  <img src="https://github.com/user-attachments/assets/81ffa923-d26c-4ab1-bbdf-7f572083b1d2" width="150" height="388" alt="imagen1" />
</div>

Then, we run the program and indicate that in this stage we have a total of 2 Large propellants.

<div align="left">
  <img width="394" height="238" alt="imagen" src="https://github.com/user-attachments/assets/a806d5d5-9301-446e-9dde-68df704d108b" />
</div>

Next, we specify how many thrusters of each type are active during this stage. In this case, we have 2 Large (Hawk), 2 Medium (Valiant), and 1 Small (Kolibri).

<div align="left">
  <img width="150" height="388" alt="imagen" src="https://github.com/user-attachments/assets/1b6380c2-74c5-4789-943c-2d1483bd5858" />
</div>

Then we continue in the program by adding the engines that are active in this stage (2 Large (Hawk), 2 Medium (Valiant), and 1 Small (Kolibri)).

<div align="left">
  <img width="394" height="238" alt="imagen" src="https://github.com/user-attachments/assets/32c8104d-d1d3-4437-83be-0fa80e367124" />
</div>

After that, you’ll need to input the mass of the spaceship at the beginning of the stage. You can find this mass value here:

<div align="left">
  <img width="150" height="388" alt="imagen" src="https://github.com/user-attachments/assets/cfe03979-870a-4d32-83b4-184148473f62" />
</div>

Finally, enter the value into the program and press Enter. You'll see the Delta V for this first stage and the total sum of all the other stages you've calculated.

<div align="left">
  <img width="394" height="258" alt="imagen" src="https://github.com/user-attachments/assets/ce3ec39b-22b0-4c33-8495-cee44bce63e9" />
</div>

Now, just press 1 and hit Enter to calculate the next stage. To do this, you’ll need to detach the first stage, and the ship will end up looking like this.
This will give you the new mass value of the ship for the second stage:

<div align="left">
  <img width="150" height="388" alt="imagen" src="https://github.com/user-attachments/assets/935f6ecf-c7f5-4258-bbd2-1af640a55daa" />
</div>

Repeat this process until you have calculated all your ship's stages and obtained the total Delta V of your ship.

---
## 🛠️ Build
You can either compile the project in your own text editor, or you can run the .exe in PowerShell like this.
```powerrshell
& '.\Delta V.exe
```
---
