#include <sys/socket.h>  
#include <netinet/in.h>  
#include <arpa/inet.h>  
#include <stdio.h>  
#include <stdlib.h>  
#include <unistd.h>  
#include <errno.h>  
#include <string.h>  
#include <sys/types.h> 
//for testing purpose only 

class http_server_config
{
    private:
        const int PORT = 8080;
        const int BUFFER_SIZE = INT_MAX;
    public:
        get_port();
        get_buffer_size();


};


int main()
{
    int server_fd;
    struct sockaddr_in mysock;
    struct swo

    mysock.sin_family = AF_INET;
    mysock.sin_addr.s_addr = INADDR_ANY;
    mysock.sin_port = htons(PORT);

    return 0; 
}
