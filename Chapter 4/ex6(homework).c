// Chapter 4 Homework

// #2 Which of the following are invalid variable names?  Why?
/* 
	Rules for the creation of Variables
	- Variables are case sensitve
	- Must begin with a letter or underscore 
	- Can be followed by any combiation of
		- A-Z or a-z
		- underscores
		- 0 - 9
	- Variable cannot have:
		- Any non-alphanumeric character, spaces included.
		- Any reserved word from (stdio.h)
*/

Int - valid, (int is a reserved word)
Calloc - valid
floating - valid, (float is a reserved word)
ReInitalize - valid
Char - valid, (char is a reserved word)
Xx - valid
_1312 - valid
_ - valid
6_05 - invalid, (must begin with a letter or number)
alpha_beta_routine - valid
z - valid
A$ - invalid, ($ is non-alphanumeric.)

// #3 Which of the following are invalid constants? Why?
/* 
Integers
	Basic Integer
	- No commas,
	- Minus sign can precede, positve sign cannot.
	Octal (base 8 notation)
	-
	Hexadecimal (base 16 notation)
	- 0xFFEF0D (0, x, group of 6)
	- Group of (digits 0-9) and/or (alpha A-F)
	- A-F represents numbers 10 - 15
	- 0xFFEF0D formats via %#x 
	- FFEF0D formats via %x 
Floats
	Basic Floats
	- 3., 125.8, and -.0001 are all valid.
	- display with %f
	Scientific Notation
	- 1.7e4 -> 1.7 x 10^(-4) = .00017
	- force scientific notation with %e
	- %g prints as float between 5 < e > -4, otherwise %e
	Hexadecimal Floating
	- 0x0.3p10 -> 3/16 * 2^10 = 192
	- 0X or 0x followed by 0-9, A-F, followed by p w/ binary exponent
	Double, generally 64bit. Used when value exceeds a float
	-12.5f or 12.5F
	-Displayed with %f, %e, %g
*/
123.456 - valid, 
0x10.5 - invalid, Hexadecimal cannot have decimals.
0X0G1 - invalid, Hexadecimal supports A-F, not G.
0001 - valid, Octal.
0xFFFF - valid, Hexadecimal
123L - valid, long int
0Xab05 - valid, Hexadecimal
0L - long int
-597.25 - valid, negative integer
123.5e2 - invalid, would be a double if 1.235e4 
.0001 - valid
+12 - invalid, Integers can only be prefixed with a minus sign
98.6F - valid, F or f can be used to express double float.
98.7U - valid, declaring unsigned int, only stores positive values.
0996 - valid, Octal - %o will remove leading 0, %#o will leave leading 0.
-12E-12 - invalid, -1.2E-11 would have be valid however.
1234uL - valid, unsigned long integer
1.2Fe-7 - invalid, 1.2e-7F would have been valid however.
1.234L - valid, long integer
197u - valid, unsigned int, only stores postiive values
0XABCDEFL - invalid, 0-9, A-F  != L
0xabcu - invalid, 0-9, A-F != U
17777s - invalid, S suffix does not exist.
07777  - valid, octal - (7 * 8^3) + (7 * 8^2) + (7 * 8^1) + (7) = 4095
15,000 - invalid, Integers cannot be expressed with commas
100U - valid, unsigned int, only stores positive values
+123 - invalid, Integers can only be prefixed with a minus sign

// #4 see homework_4.c
/* 
*/

// #5 What output would you expect from the following program?
d = d

