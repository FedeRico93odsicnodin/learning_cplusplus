#include <iostream>
#include <vector>
#include <algorithm>
#include "topics/namespaces_tutorial.h"
#include "topics/typedef_tutorial.h"
#include "topics/operators_tutorial.h"
using namespace std;


// object definition for the number and the single label
struct label_tutorial {
	int num_label;
	string label_name;
};
// all the labels for the tutorial 
label_tutorial all_tutorial_labels[] = { 
	{1, "namespaces"},
	{2, "typedefs"},
	{3, "operators (some notes)"}
};

// length of the label tutorial
int find_arr_labels_length() {
	int arr_len = sizeof(all_tutorial_labels) / sizeof(all_tutorial_labels[0]);
	return arr_len;
}


// verification of the presence of the selection inside the array 
bool selection_presence(int selected_num, vector<int> all_selections) {
	if (find(all_selections.begin(), all_selections.end(), selected_num) != all_selections.end()) {
		return true;
	}
	return false;
}

// the switch for the selected tutorial 
void tutorial_selector(int selection) {
	vector<string> all_descriptions;
	switch(selection) {
		case 1: {
			using namespace namespaces_tutorial;
			cout << tutorial_title << "\n";
			cout << tutorial_descrition << "\n";
			all_descriptions = namespaces_descriptor_tutorial();
			break;
		}
		case 2: {
			using namespace typedef_tutorial;
			cout << tutorial_title << "\n";
			cout << tutorial_descrition << "\n";
			all_descriptions = typedef_descriptor_tutorial();
			break;
		}
		case 3: {
			using namespace operators_tutorial;
			cout << tutorial_title << "\n";
			cout << tutorial_descrition << "\n";
			all_descriptions = operator_descriptor_tutorial();
		}
	}
	cout << "\n\n----------\n\n";
	cin.ignore();
	for(int ind_descr = 0; ind_descr < all_descriptions.size(); ind_descr++ ) {
		string curr_description = all_descriptions[ind_descr];
		cout << curr_description << "\n";
		cin.ignore();
	}
}

int main() {
	// first comment on vscode

	// the selection for the particular tutorial to follow 
	int topic_selection = 0;
	vector<int> all_possible_selections;
	do {
		// printing the different labels from which select for starting the particular tutorial
		cout << "WELCOME TO C++ TUTORIAL!!!\n\nPress a key to select the TOPIC\n";
		for (int ind_lbl = 0; ind_lbl < find_arr_labels_length(); ind_lbl++) {
			cout << all_tutorial_labels[ind_lbl].num_label << " " << all_tutorial_labels[ind_lbl].label_name << "\n";
			all_possible_selections.push_back(all_tutorial_labels[ind_lbl].num_label);
		}
		cout << "other to EXIT\n";
		cin >> topic_selection;
		if (!selection_presence(topic_selection, all_possible_selections)) {
			cout << "GOODBYE!!!";
			break;
		}
		tutorial_selector(topic_selection);
	} while (topic_selection != 0);
	
	return 0;
}
