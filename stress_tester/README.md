# Stress Tester Guide

## How to Use the Tester

Follow the steps below to properly use this stress testing setup.

### 1. Generator (`gen.cpp`)

- Write a program that generates random test cases
- The generated input must follow the problem constraints

This file produces test inputs.

> Note: [Smash me](https://youtu.be/1jcBJN05StQ) if you are unsure how to properly write a generator.

---

### 2. Brute Force Solution (`brute.cpp`)

- Implement the correct solution here
- It may be slow and even get TLE on large inputs


---

### 3. Optimized Solution (`code.cpp`)

- Write your efficient solution here.
- This is the solution you want to test.
- Its output will be compared with the brute force solution.

---

### 4. Run the Checker Script

Execute the following command in your terminal:

```bash
bash checker.sh
```

---

## Resources:

This stress tester was verified using the following problem:

- **Codeforces 327A – Flipping Game**
    
    https://codeforces.com/problemset/problem/327/A
    

---

The following resources were helpful while building this stress tester:

1. Ali Ibrahim – Stress Testing Guide
    
    https://ali-ibrahim137.github.io/competitive/programming/2020/08/23/Stress-Testing.html
    
2. Adnan Zawad Toky – YouTube Tutorial
    
    https://youtu.be/1jcBJN05StQ
