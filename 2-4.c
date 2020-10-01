#include "ch2.c"
int main(){
	int cnt = 0;
	while(1){
		char name[64];
		snprintf(name,sizeof(name),"%d.txt",cnt);
		int fd = creat(name,0644);
		sleep(1);
		cnt++;
	}
	return 0;
}
