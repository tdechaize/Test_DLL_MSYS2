#include <stdio.h>
#include <windows.h>
#include <assert.h>
#include "lib.h"
int main(void) {
    void* Lib = LoadLibraryW(L"lib.dll");
    assert(Lib);
    func_type (*func) = (func_type*)GetProcAddress(Lib, "func");
    assert(func);
    printf("%i\n", func(11)); // should output 22
    return 0;
}
