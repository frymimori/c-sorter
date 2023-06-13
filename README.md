## C Sorter

#### Description
Create ascending and descending ordered arrays using C with a fast and unique hybrid sorting algorithm.

- All integral data types supported
- Allocates memory without dynamic memory allocation functions
- Allows freeing 5-16 bytes of unreferenced variable memory after first loop pass
- Approximately 3x faster than Bubble Sort with 5x fewer loop iterations
- Approximately 1.5x faster than Insertion Sort with fewer loop iterations
- Compiles with forward-compatible `C89`
- Conforms to strict ISO C with `-pedantic-errors` enabled
- Efficient without multithreading or processor-specific vectorization
- Fast sorting speed without relying on compiler optimization
- Faster than `O(n(log(n)))` sorting algorithms for most large inputs with randomized integers
- Iterative and procedural sorting with no inner function calls
- Lowest space complexity `O(n)`
- Memory-safe with defined behavior
- Minified and readable code with single-letter variable names
- More optimal alternative to Merge Sort, Quicksort and novel sorting algorithms
- No mean or median numbers calculated
- No recursive subfunctions
- No redundant branched or merged numbers in memory
- Optimal for both pre-sorted best cases and randomized worst cases
- Optimal for large inputs
- Predetermined high and low numbers not required
- Reverses pre-sorted order in a single loop pass
- Variants for both ascending and descending sort order
- Variants for both signed and unsigned data types

#### Usage
Clone the repository in the current directory with the command `git`.

``` console
git clone https://github.com/frymimori/c-sorter.git
```

Navigate to the cloned repository's root directory with the command `cd`.

``` console
cd c-sorter
```

The following example uses code from the file [test.c](https://github.com/frymimori/c-sorter/blob/main/test.c) to sort an array of integers.

``` c
#include <stdio.h>
#include "sorter.h"

int main(void) {
	unsigned long a = 100;
	unsigned char b[100] = {24, 132, 22, 217, 185, 9, 65, 245, 147, 88, 100, 230, 81, 77, 247, 62, 181, 51, 200, 204, 162, 155, 4, 214, 121, 41, 113, 125, 255, 234, 39, 198, 33, 69, 75, 204, 34, 219, 228, 166, 241, 189, 95, 122, 63, 74, 183, 222, 37, 27, 196, 246, 169, 177, 93, 207, 226, 251, 20, 46, 93, 207, 98, 187, 180, 158, 197, 11, 236, 82, 99, 208, 120, 148, 110, 61, 15, 90, 143, 130, 235, 60, 10, 87, 206, 77, 119, 254, 213, 227, 144, 24, 132, 217, 0, 73, 33, 197, 11, 236};
	sorterH(a, b);
	a = 0;
	printf("%u", b[0]);

	while (a != 99) {
		a++;
		printf(", %u", b[a]);
	}

	return 0;
}
```

The function `sorterA()` outputs an array of `unsigned long` integers sorted in ascending order.

The function `sorterB()` outputs an array of `unsigned long` integers sorted in descending order.

The function `sorterC()` outputs an array of `unsigned int` integers sorted in ascending order.

The function `sorterD()` outputs an array of `unsigned int` integers sorted in descending order.

The function `sorterE()` outputs an array of `unsigned short` integers sorted in ascending order.

The function `sorterF()` outputs an array of `unsigned short` integers sorted in descending order.

The function `sorterG()` outputs an array of `unsigned char` integers sorted in ascending order.

The function `sorterH()` outputs an array of `unsigned char` integers sorted in descending order.

The function `sorterI()` outputs an array of `long double` integers sorted in ascending order.

The function `sorterJ()` outputs an array of `long double` integers sorted in descending order.

The function `sorterK()` outputs an array of `double` integers sorted in ascending order.

The function `sorterL()` outputs an array of `double` integers sorted in descending order.

The function `sorterM()` outputs an array of `float` integers sorted in ascending order.

The function `sorterN()` outputs an array of `float` integers sorted in descending order.

The function `sorterO()` outputs an array of `long` integers sorted in ascending order.

The function `sorterP()` outputs an array of `long` integers sorted in descending order.

The function `sorterQ()` outputs an array of `int` integers sorted in ascending order.

The function `sorterR()` outputs an array of `int` integers sorted in descending order.

The function `sorterS()` outputs an array of `short` integers sorted in ascending order.

The function `sorterT()` outputs an array of `short` integers sorted in descending order.

The function `sorterU()` outputs an array of `char` integers sorted in ascending order.

The function `sorterV()` outputs an array of `char` integers sorted in descending order.

The first argument variable `a` is an `unsigned long` defined as the length of the array of integers to sort.

The second argument variable `b` is defined as the array of integers to sort.

``` console
gcc -o c-sorter -pedantic-errors -std=c89 sorter.c test.c
```

The output from the command `./c-sorter` is a sorted array of integers.

``` console
./c-sorter
# 255, 254, 251, 247, 246, 245, 241, 236, 236, 235, 234, 230, 228, 227, 226, 222, 219, 217, 217, 214, 213, 208, 207, 207, 206, 204, 204, 200, 198, 197, 197, 196, 189, 187, 185, 183, 181, 180, 177, 169, 166, 162, 158, 155, 148, 147, 144, 143, 132, 132, 130, 125, 122, 121, 120, 119, 113, 110, 100, 99, 98, 95, 93, 93, 90, 88, 87, 82, 81, 77, 77, 75, 74, 73, 69, 65, 63, 62, 61, 60, 51, 46, 41, 39, 37, 34, 33, 33, 27, 24, 24, 22, 20, 15, 11, 11, 10, 9, 4, 0
```
