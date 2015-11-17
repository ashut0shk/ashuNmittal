//
//  test.c
//  inf
//
//  Created by Ashutosh K on 11/17/15.
//  Copyright © 2015 Ashutosh K. All rights reserved.
//

#include "internal_test.h"

// Constructor:
Foo * FooCreate(int age, int something) {
	Foo * newFoo = malloc(sizeof(Foo));

	FooInitialize(newFoo, 12, 22);

	return newFoo;
}

void FooInitialize(Foo * this, int age, int something)
{
	this->age = age;
	this->something = something;
}

// "Property" setter:
void FooSetAge(Foo * this, int age) {
	this->age = age;
}

void FooFree(Foo * this) {
	// Do any other freeing required here.
	free(this);
}