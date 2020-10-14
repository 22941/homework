#include "ch3.c"
#include "ch2.c"
int main(int argc, char *argv[]){
	FILE *fp;
	int ret;
	int i;
	if((fp=fopen("./text1.txt","w"))==NULL)
		perror("open failed!\n");
	for(i=1; i<argc; i++){  //write all the string, xunhuanxieru
		ret = fwrite(*argv,strlen(argv[i]),strlen(argv[i]),fp);
		printf("%d : %s\n",ret, argv[i]);
	}
	fclose(fp);
	return 0;
}
