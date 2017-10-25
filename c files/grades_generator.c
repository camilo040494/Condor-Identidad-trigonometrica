#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char** argv) {
    	int random;
	double ret;
	int max = 360;
    	char *filename;
    	FILE *fd;
    	if (argc != 2) {
            	printf("This program requires just one argument <filename>\n");
            	exit(-1);
    	}
	srand ( time(NULL) );
  	random = rand();
	ret = random % max;
    	strcpy(filename,argv[1]);
    	fd = fopen(filename,"w");

    	if (fd == NULL) {
            	printf("File can not be created\n");
            	exit(-1);
    	}
    	fprintf(fd,"%lf",ret);
    	fclose(fd);
}

