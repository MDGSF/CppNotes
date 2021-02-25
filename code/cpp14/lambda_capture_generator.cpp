// Copyright (c) 2021 by HuangJian
//
// clang lambda_capture_generator.cpp -lstdc++

#include <iostream>

using namespace std;

int main() {
  auto generator = [x = 0]() mutable { return x++; };
  auto a = generator();
  auto b = generator();
  auto c = generator();
  cout << "a = " << a << endl; // 0
  cout << "b = " << b << endl; // 1
  cout << "c = " << c << endl; // 2
  return 0;
}
