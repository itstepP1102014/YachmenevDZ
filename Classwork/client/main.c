#include <stdlib.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#include <arpa/inet.h>

int main()
{
    int aSocket=socket (AF_INET,SOCK_STREAM,0);
    if (aSocket<0)
    {
        write(2,"ER: soket\n",11);
        return 1;
    }
    int error;
    struct sockaddr_in peer;
    peer.sin_family =AF_INET;
    peer.sin_port=htons(7501);
    peer.sin_addr.s_addr=inet_addr("127.0.0.1");

    error=connect(aSocket,(struct sockaddr*)&peer,sizeof(peer));
    if (error)
    {
        write(2,"ER: connect\n",12);
        return 1;
    }

    error=write(aSocket, "123",3);
    if (error<=0)
    {
        write(2, "ER: write\n",10);
        return 1;
    }

    char buf[3];

    error=read(aSocket,buf,3);

    if (error<=0)

    {
        write(2, "ER: read\n",9);
        return 1;
    }

    else

    {
        write(1,buf,3);
        write(1,"\n",1);
    }
    return 0;
}
