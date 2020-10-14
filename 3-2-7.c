#include "ch3.c"
int main(){
	FILE *fp;
	int fd;
	fd = open("./text1.txt",O_RDONLY);
	fp = fdopen(fd,"r");
	fclose(fp);
	return 0;
}
