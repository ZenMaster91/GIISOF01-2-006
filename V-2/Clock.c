#include "Clock.h"
#include "Processor.h"
// #include "ComputerSystem.h"

int tics = 0;

void Clock_Update() {
  tics++;

  // Raise and interrupt whenever the tics are a multiple of
  // INTERVALBETWEENINTERRUPS.
  if (tics % INTERVALBETWEENINTERRUPS == 0 && tics != 0) {
    // Raise the exception.
    OperatingSystem_HandleClockInterrupt();
  }
  // ComputerSystem_DebugMessage(97,CLOCK,tics);
}

int Clock_GetTime() { return tics; }
