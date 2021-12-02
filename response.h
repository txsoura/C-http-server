/**
 *  response.h
 */

// Response Codes Value
#define OK 0
#define NOT_FOUND 1
#define METHOD_NOT_ALLOWED 2

void response(int sock_fd, int status_code);

int get_response_code(char *method, char *path);

void response_body(int sock_fd, char *path, int status_code);