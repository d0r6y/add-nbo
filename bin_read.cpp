#include "bin_read.h"
#include <stdio.h>
#include <stdint.h>

uint32_t * bin_read(char * file_name)
{
	FILE *fp;
	fp = fopen(file_name, "rb");
	uint8_t buffer[4]={0,};

	fread(&buffer[0], sizeof(uint8_t), 1, fp);
	fread(&buffer[1], sizeof(uint8_t), 1, fp);
	fread(&buffer[2], sizeof(uint8_t), 1, fp);
	fread(&buffer[3], sizeof(uint8_t), 1, fp);

	uint32_t *val = reinterpret_cast<uint32_t *>(buffer);
	fclose(fp);

	return val;	
}

