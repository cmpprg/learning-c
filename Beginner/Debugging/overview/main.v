/*
Author: Ryan Camp
Purpose: Overview on debugging in C language
Date: 11-1-2020
*/

/*
Notes:
    - Bugs are not avoidable,
    - Software maintenane is the longest and most expensive part of the lifecycle
    - No body writes perfect code. Things change
    - Common Problems:
        - Logic Errors:
            - loop not executing right number of times.
            - jumping in in the wrong place on loop.
            - caught by programmer, testing.

        - Syntax Errors:
            - missing semicolon
            - missing an argument
            - caught by compiler.

        - Memory Corruption:
            - dangling references
            - memory leaks

        - Performance and Scalability:
            - not enough hardware
            - not good enough algorithm
    
        - Lack of cohesion: (single focus)
         
        - Tight Coupling(dependencies):


    Process:
        - Understand the problem(sit down with tester and understand the problem)
        - Try to reproduce the problem.
            - most problems are fixable
        - comment out code / back out changes to see where it happens.
        - Turn a large program into a lot of small programs (unit testing).
        - Isolate bug.
        - redesign and refactor
        - Test!, Test!, Test!

    Technique:
        - Trace using printf() statements.
            - output values
            - show the flow of execution
            - can help isolate the error

        - Debuggers
            - monitor execution of a program, stopit, restart it, set break points, and watch variables in memory

        - Log Files
            - can be used for analysis, add 'good' log statements to your code.

        - Monitoring Software
            - run time analysis of memory usage, network traffic, thread and object information(parallel processing).

        - Exception Handling helps a great deal to identify catastrophic errors.

        - static analyzers
            - analyze source code for specific set of known problems
            - check semantics
            - detect uninitialized variables, mem leaks, unreachable code, deadlocks or race conditions.

        - Test Suites
            - run a set of comprehensive system end-to-end tests

        - Debugging the program after it has crashed
            - analyze the call stack
            - anaylze memory dump(core file).

    - Write high quality code! in the first place
        - follow good design principles and good prgramming practices.
        - stay organized
        - meaningful variable names
        - high cohesion
        - low dependencies

    - Unit Tests
        - Automatically executed when compiling
        - helps avoid regression (write new code that breaks old program)
        - find errors in new code before it is delivered
        - TDD (write failing test, then make test pass)

    - Provdide good documentation and proper planning
        - use sudo code

    - Work in steps and constantly test after each step
        - avoid to many changes at once 
        - when making changes apply them incrementally
        - help reduce the possible sources of bugs, limits problem set. 

        
*/
