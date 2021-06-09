/*
    Memory allocated at execution time(i.e. runtime)

    Properties:
        Allocated in program's heap
        Can nly be acccessed through pointers

        C program memory layout
        |____________________|
        |       Stack        |
        |____________________|
        |         ↓          |  Stack size trends downwards in size over the course of program execution
        |                    |  Increases as we call functions, add variables, etc and decreaeses when they complete and their strack frames are removed(i.e. popped)
        |         ↑          |  Heap is trending upwards in size as we dynamically allocate memory for objects etc
        |____________________|
        |        Heap        |<-- Dynamic memory allocated here. Memory allocated wihout any order/randomly
        |____________________|
        | Uninitiliased data |
        |____________________|
        | Initiliased data   |
        |____________________|
        | Text/Code Segment  |
        |____________________|
*/