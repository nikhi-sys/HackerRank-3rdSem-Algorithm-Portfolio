# HackerRank 3rd Semester Algorithm Portfolio

## Student Details

* **Name:** Nikhi Rathod
* **Student ID / USN:** R25EF167
* **Semester:** 3rd Semester
* **Programming Language:** C++14

## Profiles

* **HackerRank:** https://www.hackerrank.com/profile/nikhimaha13
* **GitHub Repository:** https://github.com/nikhi-sys/HackerRank-3rdSem-Algorithm-Portfolio

---

## About This Portfolio

This repository contains solutions to five mandatory algorithmic problems completed as part of the HackerRank Algorithms & GitHub Coding Portfolio activity. The problems cover arrays, implementation, sorting, searching, and greedy algorithm techniques.

Each solution is implemented in C++ and includes an explanation of the selected approach along with its time and auxiliary space complexity. The portfolio demonstrates the application of fundamental algorithmic strategies and efficient problem-solving techniques.

---

## Problems Completed

| No. | Problem                 | Topic                   | Time Complexity | Auxiliary Space |
| --- | ----------------------- | ----------------------- | --------------- | --------------- |
| 1   | Mini-Max Sum            | Arrays / Implementation | O(N)            | O(N)            |
| 2   | Birthday Cake Candles   | Arrays / Counting       | O(N)            | O(N)            |
| 3   | Insertion Sort - Part 1 | Sorting                 | O(N)            | O(N)            |
| 4   | Binary Search           | Searching               | O(log N)        | O(1)            |
| 5   | Mark and Toys           | Greedy / Sorting        | O(N log N)      | O(log N)*       |

* The input vector requires O(N) storage. The O(log N) figure refers to auxiliary stack space typically associated with the C++ sorting implementation.

---

# 1. Mini-Max Sum

### Problem Summary

Given five positive integers, calculate the minimum sum and maximum sum that can be obtained by summing exactly four of the five integers.

### Approach

The solution calculates the total sum of all elements while also finding the minimum and maximum values.

* Minimum sum = total sum - maximum value
* Maximum sum = total sum - minimum value

This avoids repeatedly calculating four-element sums.

### Complexity

* **Time Complexity:** O(N)
* **Auxiliary Space:** O(N)

### Alternative Approach

Sort the five values and calculate:

* Sum of the first four elements for the minimum
* Sum of the last four elements for the maximum

However, sorting takes O(N log N), so tracking the minimum and maximum directly is more efficient.

### HackerRank Challenge

https://www.hackerrank.com/challenges/mini-max-sum/problem

---

# 2. Birthday Cake Candles

### Problem Summary

Given the heights of candles on a birthday cake, determine how many candles have the maximum height.

### Approach

The solution scans the array once while maintaining:

1. The maximum candle height found so far.
2. The number of candles having that height.

Whenever a taller candle is found, the count is reset to one. When another candle with the same maximum height is found, the count is increased.

### Complexity

* **Time Complexity:** O(N)
* **Auxiliary Space:** O(N)

### Alternative Approach

The array could first be sorted and the number of occurrences of the last element could be counted. However, sorting requires O(N log N), while a single traversal takes O(N).

### HackerRank Challenge

https://www.hackerrank.com/challenges/birthday-cake-candles/problem

---

# 3. Insertion Sort - Part 1

### Problem Summary

Insert the last element of an array into its correct position within the already sorted portion of the array. The problem also requires displaying the array after each shift.

### Approach

The last element is stored as the value to be inserted.

Elements greater than this value are shifted one position to the right until the correct position is found. The stored value is then inserted into that position.

### Complexity

* **Time Complexity:** O(N)
* **Auxiliary Space:** O(N)

### Alternative Approach

A complete insertion sort could process every element one by one. However, Part 1 only requires inserting the final element, so processing the entire array is unnecessary.

### HackerRank Challenge

https://www.hackerrank.com/challenges/insertionsort1/problem

---

# 4. Binary Search

### Problem Summary

Given a sorted array and a target value, find the zero-based index of the target using binary search.

### Approach

Binary search repeatedly divides the search range into two halves.

1. Find the middle element.
2. If it equals the target, return its index.
3. If the middle element is smaller than the target, search the right half.
4. Otherwise, search the left half.
5. Continue until the target is found.

### Complexity

* **Time Complexity:** O(log N)
* **Auxiliary Space:** O(1)

### Alternative Approach

A linear search can examine every element sequentially. Its time complexity is O(N), making it less efficient for large sorted arrays.

### HackerRank Challenge

Intro to Tutorial Challenges:

https://www.hackerrank.com/challenges/tutorial-intro/problem

---

# 5. Mark and Toys

### Problem Summary

Given the prices of toys and a fixed budget, determine the maximum number of toys that can be purchased without exceeding the budget.

### Approach

The solution first sorts the toy prices in ascending order. It then purchases the cheapest toys one by one while the total spending remains within the available budget.

This greedy strategy maximizes the number of toys because purchasing cheaper toys first leaves more of the budget available for additional purchases.

### Complexity

* **Time Complexity:** O(N log N)
* **Auxiliary Space:** O(log N) for typical C++ sorting stack space
* **Input Storage:** O(N)

### Alternative Approach

A frequency/counting-based approach could be considered when the price range is small and bounded. However, sorting provides a straightforward and generally applicable solution.

### HackerRank Challenge

https://www.hackerrank.com/challenges/mark-and-toys/problem

---

# Accepted Submission Evidence

Screenshots of the accepted HackerRank submissions are maintained as evidence for the five completed challenges.

### Evidence Included

1. Mini-Max Sum - Accepted
2. Birthday Cake Candles - Accepted
3. Insertion Sort - Part 1 - Accepted
4. Binary Search / Intro to Tutorial Challenges - Accepted
5. Mark and Toys - Accepted

---

# HackerRank Badge Evidence

The HackerRank profile is provided below for verification of earned badges and achievements.

**HackerRank Profile:**
https://www.hackerrank.com/profile/nikhimaha13

Badge evidence can be added here when applicable.

---

# Learning Reflection

Through this activity, I developed a better understanding of how algorithmic techniques can be selected according to the structure of a problem. The Mini-Max Sum and Birthday Cake Candles problems helped me practice array traversal, tracking values, and counting occurrences efficiently. Insertion Sort - Part 1 helped me understand how elements are shifted to place a value in its correct position. Binary Search introduced the importance of using a sorted array to reduce the search space by half at every step, giving a logarithmic time complexity. Mark and Toys demonstrated the greedy approach, where sorting the prices and selecting the cheapest available items helps maximize the number of purchases within a fixed budget. I also learned to analyze both time and auxiliary space complexity instead of considering only whether a program produces the correct output. Uploading the solutions to GitHub helped me organize my work into separate problem folders and maintain a clear coding portfolio. Overall, the activity strengthened my understanding of arrays, sorting, searching, greedy strategies, Big-O analysis, and documenting algorithmic solutions clearly.

---

## Repository Structure

```text
HackerRank-3rdSem-Algorithm-Portfolio/
│
├── 01-Mini-Max-Sum/
│   └── solution.cpp
│
├── 02-Birthday-Cake-Candles/
│   └── solution.cpp
│
├── 03-Insertion-Sort-Part-1/
│   └── solution.cpp
│
├── 04-Binary-Search/
│   └── solution.cpp
│
├── 05-Mark-and-Toys/
│   └── solution.cpp
│
└── README.md
```

## Portfolio Links

**HackerRank:**
https://www.hackerrank.com/profile/nikhimaha13

**GitHub:**
https://github.com/nikhi-sys/HackerRank-3rdSem-Algorithm-Portfolio
