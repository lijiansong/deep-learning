#include "utils.h"

int get_length(string fin_name)
{
    ifstream infile;
    infile.open(fin_name.c_str());
    if(!infile.is_open()) return -1;
    string line;
    int sum = 0;
    while(getline(infile, line) && line!="")
    {
        sum += line.length()/2;
    }
    infile.close();
    return sum;

}

void transform_into_byte(const string fin_name, unsigned char *buf, const int buf_len, file_type_t type)
{
    FILE *fp = fopen(fin_name.c_str(), "rb");
    if(!fp) return;
    if(!buf) return;
    unsigned int tmp;
    if(type==DATA_FOR_DDR)
    {
        for(int i=0; i<buf_len; ++i)
        {
            fscanf(fp,"%02x", &tmp);
            printf("%d: %02x ", i/8*8+7 - i%8, tmp);
            *(buf + i/8*8+7 - i%8) = (unsigned char)tmp;
        }
    }
    else if(type==ONCHIP)
    {
        for(int i=0; i<buf_len; ++i)
        {
            fscanf(fp,"%02x", &tmp);
            printf("%d: %02x ", i/64*64+63 - i%64, tmp);
            *(buf + i/64*64+63 - i%64) = (unsigned char)tmp;
        }
    }

    fclose(fp);
}

void show_buf(const unsigned char* buf, const int buf_len, file_type_t type)
{
    if(type==DATA_FOR_DDR)
    {
        for(int i=0; i<buf_len; ++i)
        {
            if((i+1)%8) printf("%02x ", *(buf+i));
            else printf("%02x\n", *(buf+i));
        }
    }
    else if(type==ONCHIP)
    {
        for(int i=0; i<buf_len; ++i)
        {
            if((i+1)%64) printf("%02x ", *(buf+i));
            else printf("%02x\n", *(buf+i));
        }
    }
}

