// Copyright (c) 2021 by HuangJian
//
// clang binary_literals.cpp -lstdc++

#include <iostream>

using namespace std;

int main() {
  int a = 0b110;  // 6
  cout << "a = " << a << endl;

  int b = 0b1111'1111; // 255
  cout << "b = " << b << endl;
  return 0;
}
