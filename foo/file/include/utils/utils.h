#ifndef UTILS_H
#define UTILS_H
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <cstring>
#include <string>
using std::string;
using std::ifstream;
typedef enum
{
    DATA_FOR_DDR,
    ONCHIP
} file_type_t;

int get_length(string fin_name);

void transform_into_byte(const string fin_name, unsigned char *buf, const int buf_len, file_type_t type);

void show_buf(const unsigned char* buf, const int buf_len, file_type_t type);
#endif
