#include <iostream>
#include <string>

// Write a program that takes two integers as input and prints their sum, difference, product, and quotient.
void PrintSDPQ(double num1, double num2) {
    std::cout << "PrintSDPQ(" << num1 << ", " << num2 << ")" << std::endl;
    std::cout << "\tSum: " << num1 + num2 << std::endl;
    std::cout << "\tDifference: " << num1 - num2 << std::endl;
    std::cout << "\tProduct: " << num1 * num2 << std::endl;
    if(num2 == 0) {
        std::cout << "\tCannot divide by zero" << std::endl;
    } else {
        std::cout << "\tQuotient: " << num1 / num2 << std::endl;
    } 
}


// Write a program that prompts the user to enter a number and then prints whether the number is even or odd.

void IsBool() {
    int input;
    std::cout << "Please enter a number: ";
    std::cin >> input;
    if(input == 0) {
       std::cout << input << " is neither odd nor even" << std::endl; 
    } else if(input % 2 == 0) {
        std::cout << "The number " << input << " is even" << std::endl;
    } else {
        std::cout << "The number, " << input << " is odd" << std::endl;
    }  
}

// Write a program that calculates and prints the area and circumference of a circle, given its radius.

void CircleAreaCirc(double radius) {
    std::cout << "Radius: " << radius << std::endl;
    std::cout << "Area: " << 3.14 * (radius * radius) << std::endl;
    std::cout << "Circumference: " << 2 * 3.14 * radius;
}

// Write a program that takes a string as input and prints the length of the string.

void StringLength(std::string input) {
    std::cout << input.size() << std::endl;
}


// Write a program that prompts the user to enter three integers and then prints the largest of the three.

// Write a program that calculates and prints the sum of the first n natural numbers, where n is a positive integer entered by the user.

// Write a program that takes an integer as input and prints its factorial.

// Write a program that prompts the user to enter a sentence and then prints the number of words in the sentence.

// Write a program that takes two strings as input and prints whether they are equal or not.

// Write a program that takes a number as input and prints whether it is prime or not.

int main() {
    // PrintSDPQ(0, 2);
    // PrintSDPQ(25, 5);
    // PrintSDPQ(25, 0); 
    // IsBool();
    // CircleAreaCirc(10);
    // StringLength("Hello World");
}