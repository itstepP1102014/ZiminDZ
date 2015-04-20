#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>

int main()
{
    /*int socket(int domain, int type, int protocol);
    int connect(int socket,  const sockadd *peer, int peer_len);*/
    int aSocket = socket (AF_INET, SOCK_STREAM, 0);
    if (aSocket < 0)
    {
        write(2, "ERROR: socket\n", 14);
        return 1;
    }
    int error;

    struct sockaddr_in peer;
    peer.sin_family = AF_INET;
    peer.sin_port = htons(7505);
    peer.sin_addr.s_addr = inet_addr("192.168.1.98");

    error = connect( aSocket, (struct sockaddr *)&peer, sizeof (peer));
    if(error < 0)
    {
        write(2, "ERROR: connect\n", 15);
        return 1;
    }
    error = write(aSocket, "123", 3);
    if(error<=0)
    {
        write(2, "ERROR: write\n", 13);
        return 1;
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
    return 0;
}
