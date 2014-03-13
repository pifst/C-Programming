// 16.3 Copying Files

#include <stdio.h>

int main(void)
{
	char inName[64], outName[64];
	FILE *in, *out;
	int c;

	// get file names from user

	printf ("Input, Enter filename: ");
	scanf ("%63s", inName);
	printf ("Output, Enter filename: ");
	scanf ("%63s", outName);

	// open input and output files

	if ( (in = fopen (inName, "r")) == NULL) {
		printf ("File %s is not available for reading.\n", inName);
		return 1;
	}

	if ( (out = fopen (outName, "w")) == NULL) {
		printf ("File %s is not available for writing.\n", outName);
		return 2;
	}
	// copy input to output
	while ( (c = getc (in)) != EOF )
		putc (c, out);

	// Close open files

	fclose (in);
	fclose (out);

	printf ("File was sucessfully copied.\n");

	return 0;
}