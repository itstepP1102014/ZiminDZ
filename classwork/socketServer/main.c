#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>

int main()
{
    int listenSocket = socket(AF_INET, SOCK_STREAM, 0);
    if (listenSocket < 0)
    {
        write(2, "ERROR: socket\n", 14);
        return 1;
    }
    int error;

    struct sockaddr_in local;
    local.sin_family = AF_INET;
    local.sin_port = htons( 7505);
    local.sin_addr.s_addr =htonl(INADDR_ANY);

    error = bind(listenSocket, (struct sockaddr *)&local, sizeof(local));
    if(error < 0)
    {
        write(2, "ERROR: bind\n", 12);
        return 1;
    }

    error = listen(listenSocket, 5);
    if(error < 0)
    {
        write(2, "ERROR: listen\n", 14);
        return 1;
    }
    int aSocket = accept(listenSocket, NULL,NULL);
    if(aSocket < 0)
    {
        write(2, "ERROR: socket\n", 14);
    }

    char bufer[3];
    error = read(aSocket, bufer, 3);
    if(error <= 0)
    {
        write(2, "ERROR: READ\n", 12);
    }
    else
    {
        write(1, bufer,3);
        write(1, "\n", 1);
    }

    error = write(aSocket, "456", 3);
    if(error <= 0)
    {
        write(2, "ERROR: write\n", 13);
        return 1;
    }
    return 0;
}
