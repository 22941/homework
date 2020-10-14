#include "ch3.c"
#include "ch2.c"
int main(){
	FILE *fp;
	char buf[101];
	int ret;
	memset(buf,0,sizeof(buf));
	if((fp=fopen("./text1.txt","w"))==NULL)
		perror("open failed!\n");
	fgets(buf,sizeof(buf),stdin);
	printf("Content is %s\n",buf);
	ret = fwrite(buf,sizeof(buf),sizeof(buf),fp);
	printf("write %d \n", ret);
	fclose(fp);
	return 0;
}
