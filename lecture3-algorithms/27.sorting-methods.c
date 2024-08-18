// +++++++++++++++++++++++++++++++++
//          SELECTION SORT
// ++++++++++++++++++++++++++++++++++

// selecting the smalest number again and again
// and placeing it in the apropiate place

// first we check all the numbers from begining to end and find the smalest
// now we swap this number with the first of the list.
// next, we check all the numbers again from the second position, given that
// the first position is already occupied with the smallest number.

/* algorithm:

For i from 0 to n-1 ("0" is the left element of the array and "n-1" is the right side of the array)
    Find smallest number between numbers[i] and numbers[n-1]
    Swap smallest number with numbers[i]

How to measure the efficiency of the algorithm:
----------------------------------------------
-the first pass take (n-1) steps
-second pass we take (n-2) steps
-then (n-3), etc:

(n-1) + (n-2) + (n-3) + ... + 1
n (n-1) / 2
(n^2 - n) / 2
n^2/2 - n/2 ---> n squared divided by two, minus n over 2

UPPER BOUND
in conclusion, selecion sort is in the order of n squared
O(n^2)

LOWER BOUND
how many steps are taken if the list is already sorted?
the seme order of n squared steps because it has to check
either way all the numbers.
Ω(n^2)

so we can use the theta terminology because both upper and lower bound
match the same number of steps.
Θ(n^2)


*/

// +++++++++++++++++++++++++++++++++
//          BUBBLE SORT
// ++++++++++++++++++++++++++++++++++

/*algorithm:

Repeat n-1 times
    For i from 0 to n-2
        If numbers[i] and numbers[i+1] out of order
            Swap them
    If no swaps
        Quit
*/
/*
Efficiency of bubble sort:

UPPER BOUND
(n-1)x(n-1)
n^2 - 1n - 1n + 1
n^2 - 2n + 1
O(n^2)

LOWER BOUND (when the list is already sorted)
Ω(n^2)
Ω(n log n)
Ω(n) ------ bubble sort
Ω(log n)
Ω(1)

*/

// ++++++++++++++++++++++++++++++++++++++
//          BINARY SEARCH & RECURSION
// ++++++++++++++++++++++++++++++++++++++
/*
Recursion: when a function calls itself.

algorithm: is recursive because being a serch algorithm,
it mentions "search" inside the algoritm itself

if no doors left
    Return false
If number behind middle door
    Return true
Else if number < middle door
    Search left half
Else if number > middle door
    Search right half

*/

// ++++++++++++++++++++++++++++++++++++++
//          MERGE SEARCH & recursion
// ++++++++++++++++++++++++++++++++++++++
/*
Merge is used with big lists

Algorithm:

    If only one number (base case to end the loop)
        Quit
    Else
        Sort left half of numbers
        Sort right half of numbers
        Merge sorted halves
Sorting:
    it takes at least another list of sapace to star sorting so it uses more memory

Merge:
    compare the first of the left side with the first of the right side
    the smallest passes to the sorted list
    keep comparing one side with the other until every one passes


7 | 2 | 5 | 4 | 1 | 6 | 0 | 3 -> recursively we divide in two and sort left and half sides until we get nin lists of size one
2   7 | 4   5 | 1   6 | 0   3 -> merging two lists of size one into four lists of size two
2   4   5   7 | 0   1   3   6 -> merge into two lists of size four
0   1   2   3   4   5   6   7 -> merge into a list of size nine

we divide log n times so
in the order of
O(n log n) --> merge sort
Ω(n log n)
Θ(n log n)

*/


/*
CONCLUSION. ORDER OF HOW FAST IN COMPARISON:

1. Merge
2. Selection
3. Bubble

*/
