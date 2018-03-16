#include <stdio.h>
#include <stdlib.h>
#define X 2048
int main(int argc,char * argv[])
{
    FILE *fp1,*fp2;
    char buf[X];
    int n;
    if(argc < 3)
    {
        printf("usage:%s<src_file><dst_file>\n",argv[0]);
        return -1;
    }
    if((fps = fopen(argv[1],"r"))==NULL)
    {
        perror("fopen src file");
        return -1;
    }
    
    if((fps = fopen(argv[2],"w"))==NULL)
    {
        perror("fopen src file");
        return -1;
    }
    if((n == fread(buf,1,N,fps))>0)
    {
        fwrite(buf,1,n,fpd);
    }
    fclose(fps);
    fclose(fpd);

    return 0;
}
