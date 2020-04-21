#ifndef CJSON_H__
#define CJSON_H__

typedef enum { C_NULL, C_FALSE, C_TRUE, C_NUMBER, C_STRING, C_ARRAY, C_OBJECT } c_type;

typedef struct {
    c_type type;
}c_value;

#endif /* CJSON_H__ */
