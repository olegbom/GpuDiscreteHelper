// pch.cpp: файл исходного кода, соответствующий предварительно скомпилированному заголовочному файлу

#include "pch.h"

// При использовании предварительно скомпилированных заголовочных файлов необходим следующий файл исходного кода для выполнения сборки.


extern "C" {
    _declspec(dllexport) DWORD NvOptimusEnablement = 0x00000001; // BUG! Setting it to 0 does not disable Optimus
    _declspec(dllexport) int AmdPowerXpressRequestHighPerformance = 1;
}

extern "C" {

    __declspec(dllexport) int _stdcall  gpu_discrete_dll()
    {
        NvOptimusEnablement = 0x00000001; // BUG! Setting it to 0 does not disable Optimus
        AmdPowerXpressRequestHighPerformance = 1;

        return 42;
    }
}
