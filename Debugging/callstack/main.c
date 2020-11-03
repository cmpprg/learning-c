/*
Author: Ryan Camp
Purpose: To learn about the call stack
Date: 11-1-2020
*/

/*
Notes:
    - A stack trace(call stack) is generated whenever your app crashes because of a fatal error.
    - LIFO (last in first out)
    - A stack trace shows a list of the functipn calls that lead to the error
        - includes the filenames and line numbers of the code that cause the exception or error to occur
        - Top of the stack contains the last call that cause the error
        - bottom of the stack contains the first all that started the chain of calls to cause the error
        - You need to find the call in your applicatipn that is causing the crash.

    - A programmer can also dump the stack trace anytime.
*/
