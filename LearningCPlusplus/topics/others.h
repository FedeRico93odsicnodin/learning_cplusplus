#include <iostream>
#include <vector>
#include <sstream> //for std::stringstream 
#include <string>  //for std::string

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
// getting the memory address of an integer
int* get_memory_address_of_int() {
    int a_num = 32;
    return &a_num;
}
// getting the memory address of a string 
std::string* get_memory_address_of_string() {
    std::string a_string = "this tutorial is awsome!";
    return &a_string;
}
// getting the memory address of a bool 
bool* get_memory_address_of_bool() {
    bool a_bool = false;
    return &a_bool;
}
std::vector<std::string> memoryaddress_descriptor_tutorial() {
    std::vector<std::string> all_descriptions;
    all_descriptions.push_back("1. memory address: a location in memory where data is stored");
    all_descriptions.push_back("2. can be accessed with the '&' (address-of operator)");
    all_descriptions.push_back("3. for instance if I want the memory address of 'std::string a_string = \"Bro\"';");
    all_descriptions.push_back("4. I can use 'std::cout << &a_string << '\\n'', to get the memory address of a string (for instance a_string = \"this tutorial is awsome!\")");
    std::string* mem_address_of_string = get_memory_address_of_string();
    std::stringstream stream_string;
    stream_string << mem_address_of_string;
    std::string string_rep_address = stream_string.str();
    std::string step_description_string = "5. the output should be an hexadecimal number of kind: '" + string_rep_address + "'";
    all_descriptions.push_back(step_description_string);
    all_descriptions.push_back("6. getting the memory address of an integer instead:\na_num = 32;\ncout << &a_num;\n");
    int* memory_address_int = get_memory_address_of_int();
    std::stringstream stream_int;
    stream_int << memory_address_int;
    std::string int_rep_address = stream_int.str();
    std::string step_description_int = "7. running the application: " + int_rep_address;
    all_descriptions.push_back(step_description_int);
    all_descriptions.push_back("8 finally, getting the memory address of a bool value: 'a_bool = false; cout << &a_bool'");
    bool* memory_address_bool = get_memory_address_of_bool();
    std::stringstream stream_bool;
    stream_bool << memory_address_bool;
    std::string bool_rep_address = stream_bool.str();
    std::string step_description_bool = "result: " + bool_rep_address;
    all_descriptions.push_back(step_description_bool);
    all_descriptions.push_back("9. generally, everytime the application runs, these values will change, also, if they are declared nearly, it is quite probable the addresses are sequentially enqueued");
    all_descriptions.push_back("10. in any case, every type has its own dimensions in terms of bytes: strings and ints take 4 bytes, while a boolean takes 1 byte.");

    return all_descriptions;
}

namespace memoryaddress_tutorial {
    using std::string;
    string tutorial_title = "MEMORY ADDRESS TUTORIAL";
    string tutorial_description = "illustrating the usage of memory";
}