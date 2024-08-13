## **Numeric Vector Processor**
by: Tanner Davison 
### Description
**Numeric Vector Processor** is a C++ project focused on performing various mathematical operations on vectors of numerical data. The project includes functions for adding two vectors element-wise, calculating the percentage of each element relative to the maximum value in the vector, and reading and displaying vector contents.

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

### Example Usage

1. **Define Arrays and Convert to Vectors**:
    ```cpp
    double myInts[] = { 100, 200, 122, 321, 400 };
    double myInts2[] = { 25, 30, 44, 21, 32, 400, 500 };
    
    vector<double> numbers(myInts, myInts + sizeof(myInts) / sizeof(double));
    vector<double> numbers2(myInts2, myInts2 + sizeof(myInts2) / sizeof(double));
    ```

2. **Add Two Vectors**:
    ```cpp
    vector<double> totals = addToArray(numbers, numbers2);
    
    cout << "Result of Addition:\n";
    for (double num : totals) {
        cout << num << "\n";
    }
    ```

3. **Calculate Percentages Relative to Maximum Value**:
    ```cpp
    vector<double> normalizedValues = percentOfMaxValue(numbers);
    
    cout << "Percent of Max Value:\n";
    readPercentOfMaxValue(normalizedValues);
    ```

4. **Display Vector Contents**:
    ```cpp
    vector<double> movedInto = move(numbers2);
    
    cout << "Moved Vector Contents:\n";
    readArray(movedInto);
    ```

### Compilation and Execution
To compile and run this project, use a C++ compiler such as g++:

```sh
g++ -o vector_math_utility vector_math_utility.cpp
./vector_math_utility
