// Copyright (c) 2020 by HuangJian

#ifndef _CPP_LANG_HPP
#define _CPP_LANG_HPP

#include <algorithm>
#include <atomic>
#include <cassert>
#include <future>
#include <iostream>
#include <map>
#include <regex>
#include <set>
#include <string>
#include <thread>
#include <unordered_map>
#include <unordered_set>
#include <vector>

// never 'using namespace std;' in c++ header

// must be C++11 or later
#if __cplusplus < 201103
#error "C++ is too old"
#endif  // __cplusplus < 201103

// [[deprecated]]
#if __cplusplus >= 201402
#define CPP_DEPRECATED [[deprecated]]
#else
#define CPP_DEPRECATED [[gnu::deprecated]]
#endif  // __cplusplus >= 201402

// static_assert
#if __cpp_static_assert >= 201411
#define STATIC_ASSERT(x) static_assert(x)
#else
#define STATIC_ASSERT(x) static_assert(x, #x)
#endif

// macro for convienient namespace
#define BEGIN_NAMESPACE(x) namespace x {
#define END_NAMESPACE(x) }
#define USING_NAMESPACE(x) using namespace x

// static_assert(
//    __GNUC__ >= 4, "GCC is too old");

#endif  //_CPP_LANG_HPP

