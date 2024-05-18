#include <iostream>
#include <vector>

std::vector<std::string> typedef_descriptor_tutorial() {
    std::vector<std::string> all_descriptions;
    all_descriptions.push_back("1. supposing we have a datatype of the kind: 'std::vector<std::pair<std::string, int>>' which is very long!'");
    all_descriptions.push_back("2. we can then compacting with typedef definition: 'typedef std::vector<std::pair<std::string, int>> pairlist_t'");
    all_descriptions.push_back("3. when declaring a new datatype in this way the naming convention is adding the 't' at the end of new type: 'pairlist_t'");
    all_descriptions.push_back("4. and when using the new datatype in 'main()' or other functions: 'pairlist_t pairlist', incrementing readability and reducing complexity");
    all_descriptions.push_back("5. the typedef are replaced with 'using' (works better with templates)");
    all_descriptions.push_back("6. a way to do so is 'using number_t = int', it will work in the same way when using them");
    return all_descriptions;
}

namespace typedef_tutorial {
	using std::string;
	string tutorial_title = "TYPEDEFS";
    string tutorial_descrition = "reserved keyword used to create an additional name\n(alias) for another datatype.\nNew identifier for an existing type\nHelps with readability and reduces typos.";

}