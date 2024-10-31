#include <bits/stdc++.h>
int count;

void even_counter() { count++; }

void test() {
  for (int i = 0; i < 50000; i++) {
    even_counter();
  }
}
int main() {
  test();
  std::cout << count << std::endl;
}