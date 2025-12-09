#include<stdio.h>
#include<time.h>
#include<unistd.h>

int main(){
	
	
	while(1){
	time_t s;
	struct tm* current_time;
	
	//time in second
	s=time(NULL);
	
	current_time=localtime(&s);
	printf("\033[2J\033[H");  
	printf("%02d:%02d:%02d",current_time->tm_hour,current_time->tm_min,current_time->tm_sec);
	
	
	fflush(stdout);
	sleep(2);
	}
return 0;
}


