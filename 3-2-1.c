#include "ch3.c"
int main(){
	int fd;
	fd = open("./text1.txt",O_CREAT,0644);
	printf("file fd = %d\n", fd);
	close(fd);
	return 0;
}
