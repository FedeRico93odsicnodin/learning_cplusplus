#include <iostream>
#include <vector>

std::vector<std::string> operator_descriptor_tutorial() {
    std::vector<std::string> all_descriptions;
    all_descriptions.push_back("1. we can shorten the way in which an increment is written from 'x = x +1' to 'x += 1' or the usual increment operator 'x++'");
    all_descriptions.push_back("2. the same happens with substraction: 'x = x - 1' / 'x -= 1 / x--'");
    all_descriptions.push_back("3. and again with '*' and division '/': x *= 3 / x /= 3'");
    return all_descriptions;
}

namespace operators_tutorial {
	using std::string;
	string tutorial_title = "OPERATORS";
    string tutorial_descrition = "just a quick reminders on some operators\n";
}