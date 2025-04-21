#include "libft.h"
#include <ctype.h>
#include <stdio.h>

void if_is_alpha_get_uppercase_return_1024(){
    int res = ft_isalpha('B');
    int expected = isalpha('B');

    if (res != expected) {
        printf("[FAIL] if_is_alpha_get_uppercase_return_1024\n");
    }else {
        printf("[PASS] if_is_alpha_get_uppercase_return_1024\n");
    }
}

void if_is_alpha_get_lowercase_return_1024(){
    int res = ft_isalpha('a');
    int expected = isalpha('a');

    if (res != expected) {
        printf("[FAIL] if_is_alpha_get_lowercase_return_1024\n");
    }else{
        printf("[PASS] if_is_alpha_get_lowercase_return_1024\n");
    }
}

void if_is_alpha_get_not_alpha_return_0(){
    int res = ft_isalpha('^');
    int expected = isalpha('^');

    if (res != expected) {
        printf("[FAIL] if_is_alpha_get_not_alpha_return_0\n");
    }else{
        printf("[PASS] if_is_alpha_get_not_alpha_return_0\n");
    }
}

int main() {
    if_is_alpha_get_uppercase_return_1024();
    if_is_alpha_get_lowercase_return_1024();
    if_is_alpha_get_not_alpha_return_0();
}