g++ -c -DBUILD_MY_DLL math_lib.cpp
g++ -shared -o math_lib.dll math_lib.o -Wl,--out-implib,libmath_lib.a