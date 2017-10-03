#include "utils.h"

int main(int argc, const char* argv[])
{
    freopen("res.txt","w", stdout);
    const string data_for_ddr = "input/data_for_ddr";
    const string onchip = "input/onchip";

    const int data_for_ddr_length = get_length(data_for_ddr);
    const int onchip_length = get_length(onchip);

    unsigned char *data_for_ddr_buf = (unsigned char*)malloc(sizeof(unsigned char)*data_for_ddr_length);
    unsigned char *onchip_buf = (unsigned char*)malloc(sizeof(unsigned char)*onchip_length);

    transform_into_byte(data_for_ddr, data_for_ddr_buf, data_for_ddr_length, DATA_FOR_DDR);
    transform_into_byte(onchip, onchip_buf, onchip_length, ONCHIP);

    show_buf(data_for_ddr_buf, data_for_ddr_length, DATA_FOR_DDR);
    show_buf(onchip_buf, onchip_length, ONCHIP);
    fclose(stdout);

    return 0;
}
