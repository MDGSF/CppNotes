// Copyright (c) 2021 by HuangJian
//
// clang return_type_deduction.cpp -lstdc++

#include <iostream>
#include <string>

using namespace std;

auto f(int i) { return i; }

template <typename T>
auto& f(T& t) {
  return t;
}

int main() {
  int i = f(10);
  cout << "i = " << i << endl;  // 10

  int j = f(i);
  cout << "j = " << j << endl;  // 10

  auto h = [](auto& x) -> auto& { return f(x); };
  string s = "hello";
  string& sr = h(s);
  cout << "sr = " << sr << endl; // hello
  return 0;
}
