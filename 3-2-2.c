#include "ch3.c"
int main(){
	FILE *fd;
	fd = fopen("./text1.txt","w");

	printf("file fd = %d\n", fd->_fileno);
	fclose(fd);
	return 0;
}
