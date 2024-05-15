#include <iostream>
#include <vector>

std::vector<std::string> fill_vector_with_demo_descriptions() {
    std::vector<std::string> all_descriptions;
    all_descriptions.push_back("1. consider namespaces first and second with each respectively x = 1 and x = 2");
    all_descriptions.push_back("2. if in the main I declare the same variable x = 3 without specifing namespace, it will be printed as default");
    all_descriptions.push_back("3. have to use std::cout << first::x for using the variable of first namespace and std::cout << second::x for using the second one");
    all_descriptions.push_back("4. or, having the 'using namespace first' before accessing the variable, if I use the prefix of the second, it will be accessed the second x");
    all_descriptions.push_back("5. the same is with using std::string or using std::cout ... it will be cut the declaration everytine, saving the fact that in std lots of methods take place");
    return all_descriptions;
}

namespace namespaces_tutorial {
	using std::string;
	string tutorial_title = "NAMESPACES";
    string tutorial_descrition = "a namespace provides a solution for preventing name conflicts\nin large projects. Eeach entity needs a unique name.\nA namespace allows for identically named entities as\nas long as the namespaces are different.";
}

