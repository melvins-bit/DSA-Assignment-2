# DSA-Assignment-2

# DSA Assignment 2 - Group 8: Merge Sort & Quick Sort

## Problem Statement
A social media application needs to sort the following fixed-length IDs:
`324, 125, 456, 218, 102, 389, 275, 147`

The objective is to implement and analyze Merge Sort and Quick Sort to determine which method is more appropriate for large fixed-length keys.

## Source Code
### Files Included
* `source_code.c`

## Input Data
`324, 125, 456, 218, 102, 389, 275, 147`

## Execution Results

### Merge Sort Execution
After merge pass: 125 324 456 218 102 389 275 147 
After merge pass: 125 324 218 456 102 389 275 147 
After merge pass: 125 218 324 456 102 389 275 147 
After merge pass: 125 218 324 456 102 389 275 147 
After merge pass: 125 218 324 456 102 389 147 275 
After merge pass: 125 218 324 456 102 147 275 389 
After merge pass: 102 125 147 218 275 324 389 456 
Final Sorted Array: 102 125 147 218 275 324 389 456 

### Quick Sort Execution
After partition (pivot 147): 125 102 147 218 324 389 275 456 
After partition (pivot 102): 102 125 147 218 324 389 275 456 
After partition (pivot 456): 102 125 147 218 324 389 275 456 
After partition (pivot 275): 102 125 147 218 275 389 324 456 
After partition (pivot 324): 102 125 147 218 275 324 389 456 
Final Sorted Array: 102 125 147 218 275 324 389 456 

## Performance Comparison

| Parameter | Merge Sort | Quick Sort |
| :--- | :--- | :--- |
| **Time Complexity (Average)**| $O(n \log n)$ | $O(n \log n)$ |
| **Time Complexity (Worst)** | $O(n \log n)$ | $O(n^2)$ |
| **Space Complexity** | $O(n)$ | $O(\log n)$ |
| **Major Operations** | Copying arrays | Swapping elements |
| **Passes/Partitions** | 3 levels of merging | 5 partitions |

## Complexity Analysis

### Merge Sort
* **Time Complexity:** $O(n \log n)$ for Best, Average, and Worst cases because the array is always divided in half and merging takes linear time.
* **Space Complexity:** $O(n)$ auxiliary space is required to temporarily store subarrays during the merge process.

### Quick Sort
* **Time Complexity:** $O(n \log n)$ for Best and Average cases. It can degrade to $O(n^2)$ in the Worst case (e.g., if the array is already sorted and a poor pivot is chosen).
* **Space Complexity:** $O(\log n)$ auxiliary stack space for recursion.

## Conclusion
Based on the execution and theoretical analysis, Quick Sort is generally more appropriate for sorting these large fixed-length keys in most real-world scenarios. Even though Merge Sort guarantees an $O(n \log n)$ worst-case time complexity, Quick Sort operates in-place, meaning it uses significantly less additional memory ($O(\log n)$ vs $O(n)$). Furthermore, Quick Sort requires less data movement (swapping vs. copying to new arrays) and has better cache locality, which typically makes it faster in practice for this type of data.
