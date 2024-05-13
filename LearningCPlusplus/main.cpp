#include <iostream>
#include <vector>
#include <algorithm>
#include "Typeof.h"
using namespace std;

// object definition for the number and the single label
struct label_tutorial {
	int num_label;
	string label_name;
};
// all the labels for the tutorial 
label_tutorial all_tutorial_labels[] = { 
	{1, "the namespaces"},
	{2, "the structs"}
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

int main() {
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
	} while (topic_selection != 0);
	
	return 0;
}
