#include "dread.h"


char *readLine(void){
	char *buffer = NULL;
	int ch;
	size_t len = 0 , capacity = 10;
	
	buffer = malloc(capacity);
	if(!buffer) return NULL;
	
	while((ch = getchar()) != '\n' && ch != EOF){
		buffer[len++] = ch;
		
		if(len >= capacity){
			capacity *= 2;
			char *new_buffer = realloc(buffer, capacity);
			if(!new_buffer){
				free(buffer);
				return NULL;
			}
			buffer = new_buffer;
		}
	}
	buffer[len] = '\0';
	return buffer;
}
	
