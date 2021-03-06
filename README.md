# Remix Programming Language
Tiny language that expediates C++ development, designed for golfing.

## Requirements
To compile the remix transpiler:
 - Boost (strings for replace)

To compile a remix file:
 - g++, linker set up

## Basic Usage and Compilation
Compile the transpiler with:
```bash
g++ remix.cpp -std=c++0x -o remix
```
Then try the hello world example (also prints hello world sorted):
```bash
./remix remix.in
./remix.out
```
## Current replacements and improvements
 - Replaces "str " with "string ", so use str for your data types.
 - Replaces "imain" with a basic main, involving argc and argv parameters.
 - Appends a whole bunch of includes and using namespace std to the beginning.
 - New: Standard Library makes some programming and printing smaller and easier. Open to suggestions.

## Contributing
Easy - make a pull request. If you don't have time, you may open a feature
request in the issues section. I am pretty busy, so I may not be able to maintain
this all the time. Thank you, and enjoy!
