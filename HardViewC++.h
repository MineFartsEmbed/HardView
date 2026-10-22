#pragma once
#if defined(__linux__)
// Linux

#include "HardView/Headers/Linux/info.hpp"

// Monitoring
#elif defined(_WIN32)
// Windows

//monitoring
// For monitoring, use LiveView.cpp with the #LIVEVIEW_CPP macro.
// Do not use monitoring/Live.hpp because it is outdated.

// PCI
#include "HardView/Headers/PCI/PCI.hpp"

// Process
#include "HardView/Headers/Process/Process.hpp"

// SMART
#include "HardView/Headers/SMART/SMART.hpp"
#include "HardView/Headers/SMART/SMARTHelprs.hpp"

// SMBIOS
#include "HardView/Headers/SMBIOS/SMBIOS.hpp"

// SPD
#include "HardView/Headers/SPD/SPD.hpp"
#include "HardView/Headers/SPD/Timing.hpp"

// WMI
#include "HardView/Headers/WMI/WMI_Info.hpp"
#else
//Other

#warning "HardViewC++ is not supported on this platform"

#endif