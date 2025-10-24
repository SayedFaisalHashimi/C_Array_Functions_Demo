
# C Array Functions Demo

**Author:** Sayed Faisal Hashimi
**Language:** C
**Level:** Beginner/Intermediate
**Date:** 2025

---

## Project Overview

This project demonstrates a collection of fundamental array operations in C. It is designed as a learning tool for practicing essential programming concepts such as array manipulation, function decomposition, input validation, sorting, and statistical calculations.

The program allows users to:

* Input an array of integers with validation.
* Display the entered array.
* Sort the array in ascending order.
* Calculate the **maximum** and **minimum** values.
* Compute the **sum**, **average**, **median**, **variance**, and **standard deviation**.

This project emphasizes **modular programming** and safe handling of user input.

---

## Features

1. **Array Input with Validation**
   Ensures that users can only enter valid integers and array sizes (1–100).

2. **Display Function**
   Prints all array elements clearly.

3. **Sorting**
   Sorts the array in ascending order using Bubble Sort and prints the sorted array.

4. **Statistical Functions**

   * **Maximum and Minimum**: Finds the largest and smallest elements in the array.
   * **Sum and Average**: Computes the total and mean of array elements.
     [
     \text{Sum} = \sum_{i=1}^{n} x_i, \quad \text{Average} = \bar{x} = \frac{\text{Sum}}{n}
     ]
   * **Median**: Finds the median of a sorted array (handles both even and odd array sizes).
     [
     \text{Median} =
     \begin{cases}
     x_{\frac{n+1}{2}}, & \text{if } n \text{ is odd} [2mm]
     \frac{x_{\frac{n}{2}} + x_{\frac{n}{2}+1}}{2}, & \text{if } n \text{ is even}
     \end{cases}
     ]
   * **Variance**: Measures how far each element is from the mean.
     [
     \text{Variance } (\sigma^2) = \frac{\sum_{i=1}^{n} (x_i - \bar{x})^2}{n}
     ]
   * **Standard Deviation**: The square root of variance, showing average deviation.
     [
     \text{Std Deviation } (\sigma) = \sqrt{\text{Variance}}
     ]

5. **Function Decomposition**
   Each task is encapsulated in its own function to demonstrate modular and reusable code.

---

## What I Learned

This project helped me strengthen my skills in:

* **C Programming Fundamentals**: arrays, loops, conditional statements, and function usage.
* **Pointers and Parameter Passing**: Passing array sizes and elements by reference using pointers.
* **Input Validation**: Ensuring robust handling of user input to prevent errors.
* **Algorithm Implementation**: Writing Bubble Sort and understanding sorting logic.
* **Statistical Calculations**: Calculating sum, average, median, variance, and standard deviation, handling edge cases.
* **Code Readability & Documentation**: Using comments and modular code design to make programs understandable.
* **Debugging and Testing**: Iteratively improving code to handle edge cases and invalid input.

---

## Goals

The primary goals of this project were to:

* Demonstrate proficiency in handling arrays and basic statistical operations in C.
* Practice writing modular, reusable code through functions.
* Build a small but fully functional program that could serve as a foundation for more advanced projects.
* Improve code safety, readability, and structure for real-world applications.

---

## Usage

1. Clone the repository:

```bash
git clone https://github.com/SayedFaisalHashimi/C_Array_Functions_Demo.git
```

2. Compile the program using `gcc`:

```bash
gcc array_functions_demo.c -o array_demo -lm
```

> **Note:** `-lm` is required because the program uses `sqrt()` from `math.h`.

3. Run the executable:

```bash
./array_demo
```

4. Follow on-screen instructions to:

* Enter the array size (1–100).
* Enter each integer element.
* View results: sorted array, max, min, sum, average, median, variance, and standard deviation.

---

## Example Problem

**Input:**

```
Enter the size (1–100): 5
Enter element 1: 12
Enter element 2: 34
Enter element 3: 56
Enter element 4: 78
Enter element 5: 56
```

**Calculations:**

1. **Sum**
   [
   12 + 34 + 56 + 78 + 56 = 236
   ]

2. **Average**
   [
   \bar{x} = \frac{236}{5} = 47.2
   ]

3. **Sorted Array**
   [
   12, 34, 56, 56, 78
   ]

4. **Median**
   [
   \text{Median} = 56 \quad (\text{middle element})
   ]

5. **Variance**
   [
   \sigma^2 = \frac{(-35.2)^2 + (-13.2)^2 + 8.8^2 + 8.8^2 + 30.8^2}{5} = 503.36
   ]

6. **Standard Deviation**
   [
   \sigma = \sqrt{503.36} \approx 22.44
   ]

**Output:**

```
You entered the following numbers:
12 34 56 78 56

The sorted array elements are:
12 34 56 56 78

Max element is : 78
Min element is : 12
Sum is         : 236
Average is     : 47.20
Median is      : 56.00
Variance is    : 503.36
Std Deviation  : 22.44
```

---

## Future Improvements

* Implement safer input handling using `fgets()` and `strtol()`.
* Replace `int` sum with `long long` to prevent integer overflow.
* Use `size_t` for array sizes to follow best practices.
* Add unit tests for all functions (min, max, sum, median, sorting, variance, standard deviation).
* Modularize into `array_utils.h` and `array_utils.c` for reusability.
* Replace Bubble Sort with a more efficient sorting algorithm like QuickSort.

---

## Key Takeaways

* Solid understanding of arrays, loops, functions, and pointers in C.
* Experience with validating user input and handling edge cases.
* Ability to decompose a program into modular, reusable functions.
* Improved debugging, testing, and problem-solving skills in C programming.
* Understanding of basic statistics (mean, median, variance, standard deviation) in practical applications.
