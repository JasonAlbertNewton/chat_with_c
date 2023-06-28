/*
 *  2023 - 6 - 28: This server.c focus to build ther server 
 *  This is a temporary file which is used to examine and further transfer it to a <template> structure 
 *  there are four function in this source file
 *  1. create socket --> 2. setsockopt --> 3.bind --> 4. listen --> 5. Accept ---> 6.Send
 * */

#ifdef SERVER
#else
#define SERVER

//include library
#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>

//global variable


//create socket function
int create_Socket(int* socket_descriptor)
{
    *socket_descriptor = socket(AF_INET , SOCK_STREAM , 0);
    if(*socket_descriptor <0)return -1;
    return 0;
} 


#endif

//TESTING PURPOSE ONLY
int main(){
    int *test;
    int temp = create_Socket(test);
    printf("%d" , *test);
    return 0;

}
