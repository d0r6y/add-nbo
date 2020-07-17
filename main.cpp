#include <stdio.h>
#include <stdint.h>
#include <arpa/inet.h> // for ntohl function
#include "bin_read.h" // Use 'bin_read' custom function (reads binary data from input file)

int main(int argc, char * argv[])
{	
	uint32_t *input1 = bin_read(argv[1]);
	uint32_t res1 = ntohl(*input1); // change input1 into Host Byte Order

	uint32_t *input2 = bin_read(argv[2]);
	uint32_t res2 = ntohl(*input2); // change input2 into Host Byte Order

	printf("%d(0x%x) + %d(0x%x) = %d(0x%x)\n", res1, res1, res2, res2, res1+res2, res1+res2);

	return 0;
}
