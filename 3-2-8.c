#include "ch3.c"
int main(){
	FILE *fp;
	char buf[80];
	memset(buf,0,sizeof(buf));
	fp = fopen("./text1.txt","a+");
	fputs("\tappend new information!",fp);
	fp = freopen("./text1.txt","r",fp);
	fgets(buf,sizeof(buf),fp);
	printf("Content of file : %s\n",buf);
	fclose(fp);
	return 0;
}
