// Copyright (c) 2021 by HuangJian
//
// clang deprecated_attribute.cpp -lstdc++

#include <iostream>

using namespace std;

[[deprecated]]
void old_method() {}

[[deprecated("Use new_method instead")]]
void legacy_method() {}

int main() {
  old_method();
  legacy_method();
  return 0;
}

