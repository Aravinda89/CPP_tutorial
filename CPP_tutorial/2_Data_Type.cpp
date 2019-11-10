#include <iostream>

int main() {
    
    // TODO: define two floating point numbers. Assign 12.07 to the
    // first floating point number. Assign 65.102 to the 
    // second floating point number.
    float first_float = 12.07;
    float second_float = 65.102;
    
    // TODO: Calculate the sum of the two floating point variables into
    // the float_sum variable.
    
    float float_sum = first_float + second_float;
    std::cout << "Sum: " << float_sum << std::endl;
    
    // TODO: Calculate difference between the second and first number
    // output the results to cout. 
    float float_difference = first_float - second_float;
    std::cout << "Subtraction: " << float_difference << std::endl;
    
    // TODO: Calculate second_float / first_float and output the results
    // to cout.
    float float_division = first_float / second_float;
    std::cout << "Division: " << float_division << std::endl;
    
    // TODO: Calculate the product of the two numbers and output the results
    // to cout.
    float float_mul = first_float * second_float;
    std::cout << "Multification: " << float_mul << std::endl;

    return 0;
}
