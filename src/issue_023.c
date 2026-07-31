#include "student.h"
#include <string.h>

// ========================================
// Issue #23: Implement is_valid_phone
// ========================================
// TODO: Validate phone format (only digits)
//
int is_valid_phone(const char *phone) {

        if (phone == 0)
            return 0;

        int len = 0;

        while (phone[len] != '\0')
        {
            if (phone[len] < '0' || phone[len] > '9')
                return 0;

            len++;
        }

        if (len != 10)
            return 0;

        return 1;

}
