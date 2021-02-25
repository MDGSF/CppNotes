// Copyright (c) 2021 by HuangJian
//
// clang lambda_capture_unique.cpp -lstdc++

#include <iostream>
#include <memory>

using namespace std;

int main() {
  auto p = std::make_unique<int>(1);
  // auto task = [=] { *p = 5; }; // error
  auto task = [p = std::move(p)] { *p = 5; }; // ok
  return 0;
}
