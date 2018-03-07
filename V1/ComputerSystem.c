#include "ComputerSystem.h"
#include "Asserts.h"
#include "ComputerSystemBase.h"
#include "Messages.h"
#include "OperatingSystem.h"
#include "Processor.h"
#include <stdio.h>
#include <stdlib.h>

// Functions prototypes
void ComputerSystem_PrintProgramList();

// Array that contains basic data about all daemons
// and all user programs specified in the command line
PROGRAMS_DATA *programList[PROGRAMSMAXNUMBER];

// Powers on of the Computer System.
void ComputerSystem_PowerOn(int argc, char *argv[]) {

  // Load debug messages
  int nm = 0;
  nm = Messages_Load_Messages(nm, TEACHER_MESSAGES_FILE);
  nm = Messages_Load_Messages(nm, STUDENT_MESSAGES_FILE);
  printf("%d Messages Loaded\n", nm);

  ComputerSystem_PrintProgramList();

  int na = Asserts_LoadAsserts();
  if (na == -1)
    printf("Asserts file unavailable\n");
  else
    printf("%d Asserts Loaded\n", na);

  // Obtain a list of programs in the command line
  int daemonsBaseIndex = ComputerSystem_ObtainProgramList(argc, argv);

  // Request the OS to do the initial set of tasks. The last one will be
  // the processor allocation to the process with the highest priority
  OperatingSystem_Initialize(daemonsBaseIndex);

  // Tell the processor to begin its instruction cycle
  Processor_InstructionCycleLoop();
}

// Powers off the CS (the C program ends)
void ComputerSystem_PowerOff() {
  // Show message in red colour: "END of the simulation\n"
  ComputerSystem_DebugMessage(99, SHUTDOWN);
  exit(0);
}

void ComputerSystem_PrintProgramList() {
  int i;
  ComputerSystem_DebugMessage(101, INIT);
  for (i = 0; i < PROGRAMSMAXNUMBER; i++) {
    if (userProgramsList[i] != NULL) {
      ComputerSystem_DebugMessage(102, INIT,
                                  userProgramsList[i]->executableName,
                                  userProgramsList[i]->arrivalTime);
    }
  }
}

/////////////////////////////////////////////////////////
//  New functions below this line  //////////////////////
