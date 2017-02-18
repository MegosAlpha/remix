// Remix Standard Library
// Created February 18, 2017
// Copied into the beginning of every remix file, sort of how
// strings are implictly loaded by g++ in c++. Contains useful operations.
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>
using namespace std;

void strsort(string& s) {
  sort(s.begin(), s.end());
}

void prnt(string s) {
  cout << s << endl;
}
