#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#include <arpa/inet.h>

int main()
{
    int listenSocket=socket(AF_INET,SOCK_STREAM,0);

    if (listenSocket<0)
    {
        write(2,"ER: soket\n",11);
        return 1;
    }

    int error;
    struct sockaddr_in local;
    local.sin_family = AF_INET;
    local.sin_port=htons(7501);
    local.sin_addr.s_addr=htonl(INADDR_ANY);
    error=bind(listenSocket,(struct sockaddr*)&local,sizeof(local));
    if (error)
    {
        write(2,"ER: bind\n",9);
        return 1;
    }

    error=listen(listenSocket,5);
    if (error)
    {
        write(2, "ER: listen\n",11);
        return 1;
    }
    int aSocket =accept(listenSocket,NULL,NULL);

    if (aSocket<0)
    {
        write(2, "ER: accept\n",11);
        return 1;
    }

    char buf[3];
    error=read(aSocket, buf,3);

    if (read<=0)
    {
        write(2, "ER: read\n",9);
                return 1;
    }
    else
    {
        write(1,buf,3);
    write(1,"\n",1);
    }

    error=write(aSocket,"456",3);
    if (error<=0)
    {
       write(2, "ER: write\n",10);
        return 1;
    }

    return 0;
}
