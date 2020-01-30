// Interface for Array in CwC
// lang::CwC
#include <stdlib.h>
#include <stdio.h>
#include "object.h"
#include "string.h"

class Array : public Object{
	public:

    // constructor
    Array(size_t size) {
    }

	// default constructor, never use
	Array() {}

	// destructor 
	virtual ~Array() {
	}

	// hashes array 
	size_t hash() {
	}

	// Removes the element at given index
	// sets the item at the index to a nullptr
	// only valid if 0 <= index <= length - 1
  	virtual void remove(size_t index) {
	}

	// inserts given object at given index
	// only valid if 0 <= index <= length - 1
	virtual void insert(void* to_add, size_t index) {
	}

	// returns len_ value; the length of the array
	size_t len() {
	}

	// returns pointer to object at given index
	virtual void* get(size_t index) {
	}

	// returns true if array is empty, false if it not
	bool is_empty() {
	}

	// prints particular element at given index
	virtual void print_index(size_t index) {

	}
	
	// prints entire array
	void print() {
	}

	// inserts an item after the last index currently occupied by an item (not nullptr)
	// doubles the size of the array if an item occupies the length-1 index
	virtual void append(void* to_add) {
	}
};




class IntArray : public Array{
	public:

    // constructor
    IntArray(size_t size) {
    }

	// destructor 
	~IntArray() {
	}

	// inserts given object at given index
	void insert(int* to_add, size_t index) {
	}

	// returns pointer to object at given index
	int* get(size_t index) {
	}

	// prints particular element at given index
	void print_index(size_t index) {
	}

	// append given object to the array if there is space
	void append(int* to_add) {
	}
};

class BoolArray : public Array{
	public:

    // constructor
    BoolArray(size_t size) {
    }

	// destructor 
	~BoolArray() {
	}


	// inserts given object at given index
	void insert(bool* to_add, size_t index) {
	}

	// returns pointer to object at given index
	bool* get(size_t index) {
	}

	// prints particular element at given index
	void print_index(size_t index) {
	}

	// append given object to the array if there is space
	void append(bool* to_add) {
	}
};


class FloatArray : public Array{
	public:

    // constructor
    FloatArray(size_t size) {
    }

	// destructor 
	~FloatArray() {
	}

	// inserts given object at given index
	void insert(float* to_add, size_t index) {
	}

	// returns pointer to object at given index
	float* get(size_t index) {
	}

	// prints particular element at given index
	void print_index(size_t index) {
	}

	// append given object to the array if there is space
	void append(float* to_add) {
	}
};


class StringArray : public Array{
	public:

    // constructor
    StringArray(size_t size) {
    }

	// destructor 
	~StringArray() {
	}

	// inserts given object at given index
	void insert(String* to_add, size_t index) {
	}

	// returns pointer to object at given index
	String* get(size_t index) {
	}

	// prints particular element at given index
	void print_index(size_t index) {
	}

	// append given object to the array if there is space
	void append(String* to_add) {
	}
};

