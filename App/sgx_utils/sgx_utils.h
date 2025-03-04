#ifndef SGX_UTILS_H_
#define SGX_UTILS_H_

#include <string>

void print_error_message(sgx_status_t ret);

int initialize_enclave(void);

bool is_ecall_successful(sgx_status_t sgx_status, const std::string& err_msg, sgx_status_t ecall_return_value = SGX_SUCCESS);

void ocall_addsalt(int *msg);

#endif // SGX_UTILS_H_
