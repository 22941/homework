#include "ch3.c"
#include "ch2.c"
int main(int argc, char *argv[]){
	FILE *fp;
	int ret;
	printf("%ld\n",sizeof(*argv));
	if((fp=fopen("./text1.txt","w"))==NULL)
		perror("open failed!\n");
	printf("\n");
	ret = fwrite(*argv,1,sizeof(*argv),fp);
	printf("write %d \n", ret);
	fclose(fp);
	return 0;
}
