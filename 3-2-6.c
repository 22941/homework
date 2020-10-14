#include "ch3.c"
int main(){
	FILE *fp;
	fp = fdopen(1,"w+");
	fprintf(fp,"test data %s\n","hello world");
	fclose(fp);
	return 0;
}
