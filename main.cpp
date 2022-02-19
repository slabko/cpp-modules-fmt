#include <fmt/chrono.h>
#include <fmt/core.h>
#include <fmt/format.h>
#include <iostream>

#include <chrono>

using namespace std::chrono_literals;

int main() {
  fmt::print("starting");

  fmt::print("Defulat format: {} {}\n", 42s, 100ms);
  fmt::print("strftime-like format: {:%H:%M:%S}\n", 3h + 12min + 42s);

  auto now = std::chrono::system_clock::now();
  fmt::print("Now is: {}\n", now);
  fmt::print("strftime-like format: {:%Y-%m-%d}\n", now);
}
