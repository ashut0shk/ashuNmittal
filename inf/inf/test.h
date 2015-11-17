//
//  test.h
//  inf
//
//  Created by Ashutosh K on 11/17/15.
//  Copyright © 2015 Ashutosh K. All rights reserved.
//

#ifndef test_h
#define test_h

#include <stdio.h>
typedef struct Foo Foo;
Foo * FooCreate(int age, int something);
void FooSetAge(Foo * this, int age);
void FooFree(Foo * this);
#endif /* test_h */
