# CS121Project3

Built By Adithya Ganesan

Introduction to pointers and sorting algorithms for c programs. 

## BubbleSort

Performs a Bubble Sort on an int array

constant MAX is max length of array
function sort (array):
    create integer variables i and j
    for i from zero to MAX - 1:
        for j from zero to MAX - 1:
            if array[j] > array[j+1]:
                swap array[j] with array[j+1]
                printArray(array)

