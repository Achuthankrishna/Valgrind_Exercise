# Valgrind Exercise
## Author:
Vyshnav Achuthan - (Achuthankrishna)
## Standard install via command-line
```bash
# Configure the project and generate a native build system:
  # Must re-run this command whenever any CMakeLists.txt file has been changed.
  cmake -S ./ -B build/
# Compile and build the project:
  # rebuild only files that are modified since the last build
  cmake --build build/
  # or rebuild everything from scracth
  cmake --build build/ --clean-first
  # to see verbose output, do:
  cmake --build build/ --verbose
# Run program:
  ./build/app/shell-app
# Clean
  cmake --build build/ --target clean
# Clean and start over:
  rm -rf build/
```
## What happens when the executable is linked statically?  Does Valgrind still detect those same bugs?
* When an executable is linked statically, all the necessary libraries are included in the executable itself , and thats not how dynamic linking works. 
* Valgrind is designed for dynamic linking purposes ,as it can intercept memory allocations and deallocations. When valgrind is ran on static exectubales , it might not be able to generate high level details as it doesn't have same level of access as it had in dyamic linked executables.
* Valgring can still detect uninitalised variables but it can't give details on memory leaks and allocations , and any issues related to system libraries.

Why or why not? Accessibility Issues: Valgrind doesn't have access in libraries which are statically linked, because it can't track code which are not part of the dynamically linked executables.


********************************************************************************************************************************

