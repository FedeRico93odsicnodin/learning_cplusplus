#include <iostream>
#include <vector>

// tutorial on arithmetics operators 
std::vector<std::string> arithmetics_descriptor_tutorial() {
    std::vector<std::string> all_descriptions;
    all_descriptions.push_back("1. the min and max functions take place in the 'std' class:\ndouble x = 3;\ndouble y = 4;\ndouble z;\n\nz = std:min(x, y);");
    all_descriptions.push_back("2. the other functions are can be used including the library <cmath>");
    all_descriptions.push_back("3. pow example: z = pow(2, 4); [z = 16]");
    all_descriptions.push_back("4. square root example: z = sqrt(9); [z = 3]");
    all_descriptions.push_back("5. absolute value example: z = abs(-3); [z = 3]");
    all_descriptions.push_back("6. round example: z = round(3.16); [z = 3]");
    all_descriptions.push_back("7. ceil example: z = ceil(2.99); [z = 3]");
    all_descriptions.push_back("8. floor example: z = floor(2.99); [z = 2]");
    all_descriptions.push_back("9. for more functions and information check: https://cplusplus.com/reference/cmath/");

    return all_descriptions;
}
namespace arithmetics_tutorial {
    using std::string;
    string tutorial_title = "ARITHMETICS TUTORIAL";
    string tutorial_description = "just a bref reminder on arithmetics in C++";
}

// tutorial on memory addresses 
std::vector<std::string> memoryaddress_tutorial() {
    std::vector<std::string> all_descriptions;

    return all_descriptions;
}