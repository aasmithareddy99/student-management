#include "student.h"
#include <string.h>

// ========================================
// Issue #24: Implement is_valid_grade
// ========================================
// TODO: Check if grade is 0-100
//
int is_valid_grade(int grade) {
        if (grade >= 0 && grade <= 100)
            return 1;

        return 0;

}
