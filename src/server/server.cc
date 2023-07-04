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

//set various option for a socket 
int set_Socket(int* socket , int* status , int* option_value)
{
    if(*socket < 0) return -1;
    *status = setsockopt(*socket, SOL_SOCKET , SO_REUSEADDR , &option_value , sizeof(option_value));
    return 0;
}

int listen_Socket();

#endif

//TESTING PURPOSE ONLY
int main(){
    int *test;
    int temp = create_Socket(test);
    int *test1;
    int set = set_Socket(test , test , test1);
    //printf("%d , %d" , set , *test1);
    return 0;

}
