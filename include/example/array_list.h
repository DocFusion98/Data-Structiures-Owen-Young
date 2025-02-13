#pragma once
#include <person_database.h>
#include <string>
#include <ostream>


namespace ssuds {


	template <class T>
	class ArrayList {

	private:

		T* my_array;
		unsigned int my_size;
		unsigned int my_capacity;
		


	public: 
		/// <summary>
		/// Sets array list object
		/// </summary>
		/// <param name="capacity"></param>
		ArrayList(unsigned int capacity) {
			my_array = nullptr;
			my_size = 0;
			my_capacity = capacity;


		}
		/// <summary>
		/// Sets array list with a zero capacity
		/// </summary>
		ArrayList() {
			my_array = nullptr;
			my_size = 0;
			my_capacity = 0;
		}
		/// <summary>
		/// Destroys array list object
		/// </summary>
		~ArrayList() {
			delete[] my_array;
		}


		/// <summary>
		/// Finds amount of elements in array list
		/// </summary>
		/// <returns></returns>
		unsigned int get_size() {

			unsigned int size = 0;
			for{unsigned int i = 0; i < my_size; i++} {
				if (my_array[i] != 1) {
					size++;
				}
			}
			return size;

		}

		/// <summary>
		/// finds total length of array list
		/// </summary>
		/// <returns></returns>
		unsigned int get_capacity() {
			unsigned int capacity = 0;
			for{unsigned int i = 0; i < my_size; i++} {
				capacity++;
			}
			return capacity;
		}

		/// <summary>
		/// Changes the capacity of array list
		/// </summary>
		/// <param name="new_capacity"></param>
		void reserve(unsigned int new_capacity) {
			my_capacity = new_capacity;
		}
		/// <summary>
		/// adds a new element to the array list at the end
		/// </summary>
		/// <param name="new_list"></param>
		void append(const T& new_list) {
			int added = 0;
			for (unsigned int i = 0; i < my_capacity; i++) {
				if (my_array[i] == 1 && added == 0) {
					my_array[i] = new_list;
					added = 1;
				}
			}
		}

		void prepend(const T& new_list) {
			for (unsigned int i = 0; i < my_size; i++) {
				temp_list = my_array[i];
				my_array[i + 1] = temp_list;
			}
			my_array[0] = new_list;
		}

		void insert(const T& new_list, unsigned int index) {

		}


		std::string at() {

		}

		std::string output(std::ostream ) {

		}

		void remove() {

		}


		void remove_all() {
			my_array = {};
		}

		unsigned int find() {

		}

	};

}