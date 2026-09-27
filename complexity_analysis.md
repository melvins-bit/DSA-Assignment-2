# Complexity Analysis

## Merge Sort
* **Number of passes:** 3 main levels of merging for 8 elements ($\log_2 8$).
* **Comparisons:** Approximately $n \log n$ comparisons.
* **Time Complexity:** $O(n \log n)$ for Best, Average, and Worst cases.
* **Additional Space:** $O(n)$ auxiliary space is required to temporarily store subarrays during the merge process.

## Quick Sort
* **Number of partitions:** 5 partitions occurred due to the specific pivot selection (last element) and array arrangement.
* **Comparisons/Major Operations:** Comparisons and in-place element swapping.
* **Time Complexity:** $O(n \log n)$ Best/Average case, but can degrade to $O(n^2)$ in the Worst case (e.g., already sorted array).
* **Additional Space:** $O(\log n)$ auxiliary stack space for recursion.