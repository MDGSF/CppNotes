// Copyright (c) 2021 by HuangJian
//
// g++ mutex1.cpp -lpthread -std=c++11 -o a.out

// mutex example
#include <iostream>  // std::cout
#include <mutex>     // std::mutex
#include <thread>    // std::thread

std::mutex mtx;  // mutex for critical section

void print_block(int n, char c) {
  mtx.lock();
  for (int i = 0; i < n; ++i) {
    std::cout << c;
  }
  std::cout << '\n';
  mtx.unlock();
}

int main() {
  std::thread th1(print_block, 50, '*');
  std::thread th2(print_block, 50, '$');

  th1.join();
  th2.join();

  return 0;
}
