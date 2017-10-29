#include"header.h"

int main()
{
int fd;
char sfd[4];
fd=open("input.txt",O_RDWR);
write(fd,"COW IS MAD",11);
lseek(fd,0,SEEK_SET);

sprintf(sfd,"%d",fd);
system("cat input.txt");
execl("./q1","q1",sfd);

}
