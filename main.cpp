#include <stdio.h>
#include <stdint.h>
#include <arpa/inet.h>
#include "bin_read.h"

int main(int argc, char * argv[])
{	
	uint32_t *input1 = bin_read(argv[1]);
	uint32_t res1 = ntohl(*input1);
	uint32_t *input2 = bin_read(argv[2]);
	uint32_t res2 = ntohl(*input2);

	printf("%d(0x%x) + %d(0x%x) = %d(0x%x)\n",res1,res1, res2, res2, res1+res2, res1+res2);

	return 0;
}
