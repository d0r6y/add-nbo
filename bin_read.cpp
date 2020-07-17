#include "bin_read.h"
#include <stdio.h>
#include <stdint.h>

uint32_t * bin_read(char * file_name)
{
	FILE *fp;
	fp = fopen(file_name, "rb");
	uint8_t buffer[4]={0,};

	for(int i=0;i<4;i++)
	{
		fread(&buffer[i], sizeof(uint8_t), 1, fp); // read binary value from input file (Network Byte Order)
	}

	uint32_t *val = reinterpret_cast<uint32_t *>(buffer); // aggregate array values into one 4byte value
	
	fclose(fp);
	return val;	
}

