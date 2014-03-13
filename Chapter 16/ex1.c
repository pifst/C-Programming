/* Chapter 16 I/O operations
Character I/O
	getchar - reads data, one character at a time.
	putchar - writes data, one character at a time.

Formatted I/O
	printf -  prints output string
		      %[flags][width][.precision][h1L]type
	scanf - searches input string
Special Functions - Source always refers to File's Pointer.
  Open & Close file
	fopen ("source", "mode") // source arg refers to pointer of file
	fclose ("source") // source arg refers to pointer of file
  Read & write at one character a time to file
	getc - (inputFile)
		   read single character from file
	putc - ("character", sourcePointer)
  Write string/variable to file, Search file for string/variable
	fprintf - (outFile, "String of Text.\n");
	fscanf - (inFile, "%f", &fv); // read next float value, assign to fv.
  Read & Write buffers to file.
  //buffer is a pointer to the character array where data is stored
  //n Int that defines max # of characters to be stored to buffer
  //filePtr identifes the file from which buffer interacts
  	fgets - (buffer, n, filePtr)
	fputs - (buffer, filePtr)

Standard Input, Output, Errors
// All I/O functions
	stdin - fscanf (stdin, "%i", &i) - same as scanf.
	stdout - fprintf (stdout, "Hello Console or piped output.\n")
	stderr - fprintf (stderr, "Custom Error.\n

Exit Functions
// Forces immediate termination of program.
	exit (n) // int n provides exit status
			 // EXIT_SUCCESS & EXIT_FAILURE built in to <stdlib.h>
	return // Exits function -> then differs to the calling routine.

Renaming & Removing Files
	rename ("oldfile", "newfilename") // returns non-zero in failure
		if ( rename ("tempfile", "database") ) {
			fprintf (stderr, "Can't rename tempfile\n");
			exit (EXIT_FAILURE)
		}
	remove ("targetfile") // returns non-zero in failure

*/


