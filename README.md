# C Array Programs

A collection of four C programs demonstrating common **1D and 2D array
operations** using standard C.

## 📌 Programs Included

  -----------------------------------------------------------------------
  File                    Program                 Description
  ----------------------- ----------------------- -----------------------
  `q1.c`                  Negative Elements in    Reads a one-dimensional
                          Array                   array and displays all
                                                  negative elements.

  `q2.c`                  Largest Element in      Reads a 2D matrix and
                          Matrix                  finds its largest
                                                  element.

  `q3.c`                  Transpose of Matrix     Reads a square matrix
                                                  and displays its
                                                  transpose.

  `q4.c`                  Row and Column Sum      Displays the selected
                                                  row and column elements
                                                  and calculates their
                                                  sums.
  -----------------------------------------------------------------------

## 🛠️ Requirements

-   C compiler such as **GCC**, **Clang**, or **MinGW**
-   Any C-compatible IDE/editor such as VS Code, Code::Blocks, Dev-C++,
    or Visual Studio Code with a C compiler
-   Basic understanding of C arrays and loops

## 🚀 How to Compile and Run

### Using GCC

Compile any program with:

``` bash
gcc q1.c -o q1
```

Run it on Windows:

``` bash
q1
```

On Linux/macOS:

``` bash
./q1
```

For the other programs, replace `q1.c` and `q1` with `q2`, `q3`, or
`q4`.

## 📂 Project Structure

``` text
C-Array-Programs/
│
├── q1.c
├── q2.c
├── q3.c
├── q4.c
└── README.md
```

## 📖 Program Details

### 1. Negative Elements --- `q1.c`

This program accepts the size of a one-dimensional array, takes its
elements as input, and checks every element. If an element is less than
zero, it is displayed as a negative element.

The program uses a loop to traverse the array and an `if` condition to
identify negative values. fileciteturn0file0L14-L26

**Example:**

``` text
Enter the array's size: 5

Enter array's elements:
a[0] = 10
a[1] = -5
a[2] = 8
a[3] = -2
a[4] = 15

Negative elements are: -5, -2,
```

------------------------------------------------------------------------

### 2. Largest Element in Matrix --- `q2.c`

This program accepts the number of rows and columns, stores the values
in a two-dimensional array, and finds the largest element.

The initial largest value is taken from `a[0][0]`, after which nested
loops compare every matrix element with the current largest value.
fileciteturn0file1L27-L35

**Example:**

``` text
Enter the array's row size: 2
Enter the array's column size: 3

Enter array's elements:
a[0][0] = 10
a[0][1] = 25
a[0][2] = 7
a[1][0] = 12
a[1][1] = 18
a[1][2] = 5

The largest element is: 25
```

------------------------------------------------------------------------

### 3. Transpose Matrix --- `q3.c`

This program accepts the size of a **square matrix**. It sets the number
of columns equal to the number of rows and then prints the matrix in
transposed form.

The transpose is produced by printing `a[j][i]` instead of `a[i][j]`.
fileciteturn0file2L25-L34

**Example:**

``` text
Original Matrix:

1 2 3
4 5 6
7 8 9

Transpose Matrix:

1 4 7
2 5 8
3 6 9
```

> **Note:** The current `q3.c` implementation is designed for a square
> matrix because it sets `cols = rows`. fileciteturn0file2L5-L12

------------------------------------------------------------------------

### 4. Row and Column Sum --- `q4.c`

This program accepts a two-dimensional array, asks the user for a row
number and a column number, displays the selected elements, and
calculates their respective sums.

The row sum is calculated while traversing the selected row, and the
column sum is calculated while traversing the selected column.
fileciteturn0file3L28-L52

**Example:**

``` text
Matrix:

1 2 3
4 5 6
7 8 9

Enter row number: 1
Elements of row 1: 4, 5, 6,
The sum of row 1: 15

Enter column number: 2
Elements of column 2: 3, 6, 9,
The sum of column 2: 18
```

> **Note:** The program uses the entered row and column values directly
> as array indexes. Therefore, the input should be within the valid
> index range of the matrix.

## 🧠 Concepts Demonstrated

These programs demonstrate:

-   One-dimensional arrays
-   Two-dimensional arrays
-   Array input and output
-   `for` loops
-   Nested `for` loops
-   Conditional statements
-   Finding minimum/maximum-style values
-   Matrix transpose
-   Row traversal
-   Column traversal
-   Calculating array and matrix sums
-   User input using `scanf()`

## 📚 Learning Objective

The purpose of these programs is to practice fundamental **array and
matrix operations in C** and understand how loops and conditional
statements can be used to process array elements.

## 👨‍💻 Author

**C Programming Practice**

------------------------------------------------------------------------

⭐ If this repository helped you understand C arrays and matrices,
consider giving it a star!
