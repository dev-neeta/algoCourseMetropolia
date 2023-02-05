# Activities

## Task 1

Refer to the first [link](#links).

- Why is Algorithm Analysis Important?
    - Algorithm analysis is important to examine the complexity of different algorithms and finding the most efficient algorithm to solve the problem.

- Explain the Big $O$ notation
    - Big-O notation signifies the relationship between the input to the algorithm and the steps required to execute the algorithm. It is denoted by a big "O" followed by an opening and closing parenthesis. Inside the parenthesis, the relationship between the input and the steps taken by the algorithm is presented using "n".

- Compare `Linear`, `Logarithmic`, `Quadratic` and `Constant` complexities.
    - Linear complexity
        - The complexity of an algorithm is said to be linear if the steps required to complete the execution of an algorithm increase or decrease linearly with the number of inputs. Linear complexity is denoted by O(n).

    - Logarithmic complexity
        - Binary search is an example of Logarithmic complexity where by element in an array is searched, by checking the middle of an array, and pruning the half in which the element isn't. It does this again for the remaining half, and continues the same steps until the element is found. In each step, it halves the number of elements in the array. Logarithmic complexity is denoted as O(log(n)).

    - Quadratic complexity
        - The complexity of an algorithm is said to be quadratic when the steps required to execute an algorithm are a quadratic function of the number of items in the input. Quadratic complexity is denoted as O(n²).

    - Constant complexity 
        - The complexity of an algorithm is said to be constant if the steps required to complete the execution of an algorithm remain constant, irrespective of the number of inputs. The constant complexity is denoted by O(c) where c can be any constant number.

## Task2

Refer to the first [link](#links).

- Write a simple algorithm in C++ that finds the square of the first item in a list and then prints it on the screen.
    ```
    #include <iostream>
    using namespace std;

    int main() {
        int arrayNumbers[5] = {1,2,3,4,5};
        cout<< arrayNumbers[0]*arrayNumbers[0];   
        return 0;
    }
    ```
- What is the complexity of the algorithm?
    - Constant complexity

## Task 3

Refer to the first [link](#links).

- Write a simple program that displays all items in a list to the console.
- What is the complexity of the algorithm?

## Task 4: : Individual, at home

Refer to this [pdf](./big_o.pdf):

- What is the difference between complexity and performance:
- Does complexity affects performance bor is it the other way around?
- Restate the formal definition of big $O$ in plain English

## Links

- [Big O Notation and Algorithm Analysis ](https://stackabuse.com/big-o-notation-and-algorithm-analysis-with-python-examples/)
- [Visualization](https://www.cs.usfca.edu/~galles/visualization/Search.html)
- [Big-O notation explained by a self-taught programmer](https://justin.abrah.ms/computer-science/big-o-notation-explained.html)
- [Big-O is easy to calculate, if you know how](https://justin.abrah.ms/computer-science/how-to-calculate-big-o.html)
- https://cpp.sh/
