// Copyright (c) 2021 by HuangJian
//
// clang constexpr.cpp -lstdc++

#include <iostream>

using namespace std;

constexpr int factorial(int n) {
  if (n <= 1) {
    return 1;
  } else {
    return n * factorial(n - 1);
  }
}

int main() {
  cout << factorial(5) << endl; // 120
  return 0;
}
