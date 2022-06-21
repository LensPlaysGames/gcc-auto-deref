#include <stdio.h>

typedef struct Foo {
  int a;
  int b;
} Foo;

void alter_foo_in_place(Foo *some_foo) {
  some_foo.a = 69;
  some_foo.b = 420;
}

int main(void) {
  Foo my_foo;
  alter_foo_in_place(&my_foo);
  printf("my_foo: a=%i, b=%i\n", my_foo.a, my_foo.b);
  return 0;
}
