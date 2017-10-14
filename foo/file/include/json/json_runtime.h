#ifndef _JSON_RUNTIME_H
#define _JSON_RUNTIME_H
#include "utils/utils.h"

namespace json {
typedef enum {
    JSON_INIT_SUCCESS = 0,
    JSON_INIT_FAIL,
    JSON_EXIT_SUCCESS,
    JSON_EXIT_FAIL
}jsonError_t;

}// end of namespace
#endif
