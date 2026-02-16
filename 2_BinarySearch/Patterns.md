SEARCH ON ANSWER (Continuous Binary Search)

Used when:
We must minimize / maximize a value and checking feasibility is possible.

Idea:
Binary search on answer instead of index.

Steps:
1. Define search space (low, high)
2. Assume mid as answer
3. Check if feasible
4. If not feasible -> move right
5. Else -> move left

Examples:
- Minimize max distance between gas stations
- Aggressive cows
- Allocate books
- Minimize max pages
- Koko eating bananas

Precision:
For floating answers -> stop when high - low < 1e-6
