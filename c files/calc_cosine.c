#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define PI 3.14159265

int main(int argc, char** argv) {
    	double x, ret, val, temp;
    	char *filename;
    	FILE *fd;
    	if (argc != 3) {
            	printf("This program requires two arguments <filename_in> <filename_write>\n");
            	exit(-1);
    	}

	fd = fopen(argv[1],"r");
        fscanf(fd, "%lf", &val);
        fclose(fd);

	x = PI / 180;
	temp = cos(x*val);
	ret = temp*temp;
    	filename = (char*)malloc(sizeof(char)*strlen(argv[2]));
    	strcpy(filename,argv[2]);
    	fd = fopen(filename,"w");
    	if (fd == NULL) {
            	printf("File can not be created\n");
            	exit(-1);
    	}
    	fprintf(fd,"%lf",ret);
    	fclose(fd);
}

