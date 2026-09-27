# DatastructureAssignment_Akash_V-VML25CS029-
# Binary Search Tree – ISBN Search Assignment

## 1. Aim

To construct a Binary Search Tree (BST) using ISBN keys and compare BST Search with Linear Search based on the number of comparisons required.

## 2. Input Data

The ISBN keys are:

```text
45, 20, 60, 10, 30, 50, 70, 25, 55
```

The search keys are:

```text
25, 55, 90
```

The program reads all input values from `input.txt`.

## 3. BST Construction

The ISBNs are inserted into the BST in the given order.

The resulting BST is:

```text
             45
           /    \
         20      60
        /  \    /  \
      10   30  50   70
           /     \
          25      55
```

## 4. Tree Traversals

### Inorder

```text
10 20 25 30 45 50 55 60 70
```

### Preorder

```text
45 20 10 30 25 60 50 55 70
```

### Postorder

```text
10 25 30 20 55 50 70 60 45
```

## 5. Search Comparison

| Search Key | BST Search | Linear Search |
| ---------: | ---------: | ------------: |
|         25 |          4 |             8 |
|         55 |          4 |             9 |
|         90 |          3 |             9 |

BST Search required fewer comparisons for all three search keys in this dataset.

## 6. Complexity Analysis

| Operation     | Best Case | Average Case | Worst Case |
| ------------- | --------- | ------------ | ---------- |
| BST Search    | O(1)      | O(log n)     | O(n)       |
| Linear Search | O(1)      | O(n)         | O(n)       |
| BST Insertion | O(1)      | O(log n)     | O(n)       |

The space complexity of the search operations is O(1) for the implemented iterative BST search and linear search.

The BST has a height of 3 edges for the given dataset.

## 7. Trace Table

The detailed BST insertion and search trace tables are provided in:

`trace_table.txt`

## 8. Comparison

For the given dataset, BST Search required fewer comparisons than Linear Search.

* 25: BST = 4, Linear = 8
* 55: BST = 4, Linear = 9
* 90: BST = 3, Linear = 9

The BST can avoid unnecessary comparisons by using the ordering of the keys.

## 9. Conclusion

The given ISBNs form a reasonably balanced BST with a height of 3. The experimental results show that BST Search required fewer comparisons than Linear Search for all three test cases.

Therefore, for this particular dataset, BST Search is the suitable approach because it takes advantage of the tree structure and provides faster searches when the tree remains reasonably balanced.

However, an ordinary BST can become unbalanced depending on the insertion order. In the worst case, BST Search can have O(n) time complexity.

## 10. Files in This Repository

```text
BST-ISBN-Assignment/
│
├── bst_search.c
├── input.txt
├── output.txt
├── trace_table.txt
├── complexity_analysis.txt
├── comparison_table.txt
└── README.md
```

## 11. Program Execution

The C program reads the input from `input.txt`, constructs the BST, displays the three traversals, and compares BST Search with Linear Search.

The execution output is available in:

`output.txt`
