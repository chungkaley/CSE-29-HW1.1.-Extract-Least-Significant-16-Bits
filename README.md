# CSE-29-HW1.1.-Extract-Least-Significant-16-Bits
Open the workspace (button directly above). In the file second_half.c there is a main function that repeatedly reads input from the user, calls the second_half function on the input, and prints the result.

Your task is:

Implement second_half as described below.
Use the program to get output for input numbers provided in a file. Specifically, there are two input files, small_input.txt and input.txt. You should use your program and the command line to create small_result.txt and result.txt, where each line in the result file has the decimal value of the least significant 16 bits from the input number.
The function's signature is:

// Given a uint32_t, returns the least significant (rightmost) 16 bits as a uint16_t
// For example:
//   0xFFFFFFFF -> 0xFFFF (65535)
//   0x00000000 -> 0x0000 (0)
//   0x00010001 -> 0x0001 (1)
//   0x80008000 -> 0x8000 (32768)
//   0xDEADBEEF -> 0xBEEF (48879)
uint16_t second_half(uint32_t number);
Example uses:

$ gcc second_half.c -o second_half
$ ./second_half
4294967295
65535
0
0
65537
1
$ ./second_half < small_input.txt
65535
0
1
32768
48879
$ # The next command is how you should create the output files
$ # It will result in a new file with the output from running ./second_half, which
$ # the grader will check for. You can open the files with vim to check the results!
$ ./second_half < small_input.txt > small_result.txt
$ ./second_half < input.txt > result.txt
Remember:

The input will always be a decimal number representing a uint32_t (0 to 4294967295)
You need to extract just the least significant (rightmost) 16 bits
The output should be the decimal value of those 16 bits (0 to 65535)
For reference, here are the contents of small_input.txt:

4294967295
0
65537
2147516416
3735928559
And the expected contents of small_result.txt:

65535
0
1
32768
48879
