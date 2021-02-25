// Copyright (c) 2021 by HuangJian
//
// clang -std=c++17 decltype_auto.cpp -lstdc++

#include <iostream>

using namespace std;

// Return type is `int`.
auto f(const int& i) { return i; }

// Return type is `const int&`.
decltype(auto) g(const int& i) { return i; }

void test() {
  int x = 123;
  static_assert(std::is_same<const int&, decltype(f(x))>::value == 0);
  static_assert(std::is_same<int, decltype(f(x))>::value == 1);
  static_assert(std::is_same<const int&, decltype(g(x))>::value == 1);
}

int main() {
  const int x = 0;
  auto x1 = x;            // int
  decltype(auto) x2 = x;  // const int

  int y = 0;
  int& y1 = y;
  auto y2 = y1;            // int
  decltype(auto) y3 = y1;  // int&

  int&& z = 0;
  auto z1 = std::move(z);            // int
  decltype(auto) z2 = std::move(z);  // int&&

  test();

  return 0;
}

