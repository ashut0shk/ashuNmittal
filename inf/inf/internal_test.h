//
//  internal_test.h
//  inf
//
//  Created by Ashutosh K on 11/17/15.
//  Copyright © 2015 Ashutosh K. All rights reserved.
//

#ifndef internal_test_h
#define internal_test_h
#include "test.h"

struct Foo {
	int age;
	int something;
};

void FooInitialize(Foo * this, int age, int something);

#endif /* internal_test_h */
