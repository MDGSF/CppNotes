// Copyright (c) 2021 by HuangJian
//
// clang lambda_capture.cpp -lstdc++

#include <iostream>
#include <string>

using namespace std;

int factory(int i) { return i * 10; }

int main() {
  auto f = [x = factory(2)] { return x; };
  cout << "f() = " << f() << endl; // 20
  return 0;
}
