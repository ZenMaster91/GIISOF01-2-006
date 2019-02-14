## Exercise 3
**Processor.c**
```C
void Processor_DecodeAndExecuteInstruction() {
...
  // Instruction  MEMADD operand1 memAdress
  case 'm': registerMAR_CPU = operand2;
    // Send to the main memory controller the address in which the reading has to take place: use the address bus for this
    Buses_write_AddressBus_From_To(CPU,MAINMEMORY);
    // Tell the main memory controller to read
    MainMemory_readMemory();
    registerAccumulator_CPU = operand1 + registerMBR_CPU.cell;
    registerPC_CPU++;
    break;
}
```

## Exercise 4
**V0-Example1**
```
55
ADD 0 8
WIRTE 100     // 8 at cell in position 100
MEMADD 1 100  // Add 1 to the value stored in memory position 100
WRITE 100
INC -18       // When we reach 18 the result will be 0 and therefore the zero flag 1
ZJUMP 2       // When zero flag = 1 then jump 2 instructions to the halt
JUMP -4       // Go to the write instruction.
HALT

```

## Exercise 5
**V0-Example1**
```
55
MEMADD 1024 100    // Init the value of the accumulator register to 1024
WRITE 100
READ 100
SHIFT 1           // Arithmetic shift to divide over the power of 2
INC 0             // When we reach 1 the result will be 0 and therefore the zero flag 1
ZJUMP 2           // When zero flag = 1 then jump 2 instructions to the halt
JUMP -5           // Go to the write instruction.
HALT

```
