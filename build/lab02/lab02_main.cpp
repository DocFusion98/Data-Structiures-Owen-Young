#include <array_list.h>
#include <person.h>
#include <person_database.h>
#include <iostream>



int main(int argc, char** argv) {
	// The basic test program (for floats)
	ssuds::ArrayList<float> float_list;

	std::cout << "test1:\n=====\n"; // test1 (basics):
	float_list.append(2.1f); // ======
	float_list.append(3.6f);
	std::cout << "\tsize=" << float_list.size() << std::endl; // size=2
	std::cout << "\titem0=" << float_list.at(0) << std::endl; // item0=2.1
	std::cout << "\titem1=" << float_list.at(1) << std::endl; // item1=3.6
	std::cout << "test2:\n=====\n"; // test2 (insert):
	float_list.insert(1.8f, 0); // ======
	float_list.insert(4.2f, 3); // item0=1.8
	float_list.insert(2.0f, 1); // item1=2
	for (int i = 0; i < float_list.size(); i++) { // item2=2.1
		std::cout << "\titem" << i << "=" << float_list.at(i) << "\n"; // item3=3.6
	}
	// item4=4.2
}