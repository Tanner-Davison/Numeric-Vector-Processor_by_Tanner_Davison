## **Numeric-Vector-Processor**
by: Tanner Davison 
### Description
**Vector-Math-Utility** is a C++ project focused on performing various mathematical operations on vectors of numerical data. The project includes functions for adding two vectors element-wise, calculating the percentage of each element relative to the maximum value in the vector, and reading and displaying vector contents.

### Features
- **Element-Wise Addition**: Adds two vectors element by element and returns the result as a new vector.
- **Percentage Calculation**: Computes the percentage of each element in a vector relative to the maximum value within that vector.
- **Vector Display**: Outputs the elements of a vector along with their position in the vector.
- **Move Semantics**: Demonstrates the use of move semantics by moving data from one vector to another.

### How It Works
1. **Input Vectors**: Two arrays of double values are defined and converted into vectors.
2. **Addition**: The `addToArray` function adds corresponding elements of two vectors and returns the result as a new vector.
3. **Normalization**: The `percentOfMaxValue` function normalizes the elements of a vector based on the maximum value in the vector.
4. **Output**:
    - The result of the vector addition is printed to the console.
    - The normalized values (as percentages of the max value) are printed with additional context.
    - A vector is moved using move semantics, and the contents of the moved vector are displayed.
