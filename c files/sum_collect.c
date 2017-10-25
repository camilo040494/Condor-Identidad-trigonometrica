#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {
    	double sin, cos, ret;
    	char *filename;
    	FILE *fd;
    	if (argc != 3) {
            	printf("This program requires two arguments <filename> <filename>\n");
            	exit(-1);
    	}
	
    	fd = fopen(argv[1],"r");
	fscanf(fd, "%lf", &sin);
    	fclose(fd);

    	fd = fopen(argv[2],"r");
	fscanf(fd, "%lf", &cos);
    	fclose(fd);
	
	ret = sin+cos;

    	//strcpy(filename,argv[3]);
    	//fd = fopen(filename,"w");
	printf("%lf", ret);

	return(0);
    	//if (fd == NULL) {
            	//printf("File can not be created\n");
            	//exit(-1);
    	//}
    	//fprintf(fd,"%lf",ret);
    	//fclose(fd);
}

