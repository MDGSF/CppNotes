// Copyright (c) 2021 by HuangJian
//
// clang lambda_capture_reference.cpp -lstdc++

#include <iostream>

using namespace std;

int main() {
  auto x = 1;
  auto f = [& r = x, x = x * 10] {
    ++r;
    return r + x;
  };
  cout << "f() = " << f() << endl;  // 12
  return 0;
}
