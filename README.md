# weather-modeling-c
C programs for weather modeling using quadratic equations.

# 🌦️ Weather Modeling Using Quadratic Equation (C Programming)

This project demonstrates a simple **weather prediction model** using the quadratic equation:

[
T = ax^2 + bx + c
]

Where:

* **a, b, c** → Model coefficients
* **x** → Time (hour/day/etc.)
* **T** → Predicted Temperature

## 📌 Project Objectives

✔ Understand quadratic weather modeling
✔ Learn file input/output in C
✔ Implement programs in multiple stages:
1️⃣ Hard-coded variables
2️⃣ Keyboard input
3️⃣ Single set input from a file
4️⃣ Multiple sets input from a file
✔ Practice debugging
✔ Use GitHub for version control, saving all versions

---

## 📁 Project Files

| File Name              | Description                               |
| ---------------------- | ----------------------------------------- |
| `weather_hardcoded.c`  | Quadratic model with hard-coded values    |
| `weather_keyboard.c`   | User inputs a, b, c, and x using keyboard |
| `weather_singlefile.c` | Reads one set of values from `input.txt`  |
| `weather_multifile.c`  | Reads multiple sets of input from a file  |

Example `input.txt` for multi-file version:

```
1 2 3 4
0.5 1 2 3
2 -1 0 5
```

---

## 🧮 Formula Used

The program calculates:

```
T = a*x*x + b*x + c
```

This simulates basic temperature prediction over time.

---

## 🛠 How to Compile & Run

### Compile

```
gcc filename.c -o weather
```

### Run

```
./weather
```

For file-based versions:

* Ensure `input.txt` exists in the same folder

---

## 🔍 Debugging Checklist

If you face issues:

* ✔ Confirm the file name: `input.txt`
* ✔ Ensure inputs are spaced correctly
* ✔ Add temporary print statements to verify values
* ✔ Check if `fscanf` returns **4 values**

---

## 🎯 Learning Outcomes

By completing this project, you practice:

* C variables and data types
* Mathematical expression evaluation
* Standard input/output (`scanf`, `printf`)
* File handling (`fopen`, `fscanf`, `fclose`)
* Basic debugging
* GitHub usage for storing versions

---

Author

**Praneetha Varanasi**
B.Tech Computer Science Student

