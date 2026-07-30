# Issue Descriptions - All 120 Functions

Detailed "what to implement" description for every issue, keyed by issue number. This is the reference content to paste into each `src/issue_XXX.c` file's TODO block (the files currently only have a one-line TODO comment).

---

## Issue #1: `add_student`

**File:** `src/issue_001.c`  
**Signature:** `int add_student(Student s);`  
**Time Complexity:** O(1)  
**Space Complexity:** O(1)

**What to do:** Add new student to system.

**Requirements:**
- Add the student struct to the global `students` array
- Increment the `total_students` counter
- Return 1 if successful, 0 if the array is full (`total_students >= MAX_STUDENTS`)

**Test cases to satisfy:**
- Empty database, add one student -> should succeed (returns 1)
- Add multiple students -> each succeeds, counter increments correctly
- Full database (100 students), add one more -> should fail (returns 0)

---

## Issue #2: `delete_student_by_id`

**File:** `src/issue_002.c`  
**Signature:** `int delete_student_by_id(int id);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**What to do:** Remove student record by ID.

**Requirements:**
- Find the student by ID
- Remove it from the array and shift remaining students down to maintain order
- Decrement `total_students`
- Return 1 if successful, 0 if the student was not found

**Test cases to satisfy:**
- Delete an existing student -> should succeed (returns 1), counter decrements
- Delete a non-existing student -> should fail (returns 0)
- Delete a middle student -> remaining students shift correctly, order preserved

---

## Issue #3: `get_student_by_id`

**File:** `src/issue_003.c`  
**Signature:** `int get_student_by_id(int id, Student *out);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**What to do:** Retrieve student by ID.

**Requirements:**
- Search the global `students` array for a record matching the given lookup value
- Copy the matching student into `*out` (or return the pointer, per the signature) when found
- Return a clear "not found" sentinel (0/NULL) when no match exists
- Do not modify the global database or any student data

**Test cases to satisfy:**
- Lookup value exists in a populated database -> correct student returned
- Lookup value does not exist -> not-found sentinel returned
- Empty database -> not-found sentinel returned

---

## Issue #4: `get_student_by_email`

**File:** `src/issue_004.c`  
**Signature:** `int get_student_by_email(const char *email, Student *out);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**What to do:** Retrieve student by email.

**Requirements:**
- Search the global `students` array for a record matching the given lookup value
- Copy the matching student into `*out` (or return the pointer, per the signature) when found
- Return a clear "not found" sentinel (0/NULL) when no match exists
- Do not modify the global database or any student data

**Test cases to satisfy:**
- Lookup value exists in a populated database -> correct student returned
- Lookup value does not exist -> not-found sentinel returned
- Empty database -> not-found sentinel returned

---

## Issue #5: `get_student_by_name`

**File:** `src/issue_005.c`  
**Signature:** `int get_student_by_name(const char *name, Student *out);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**What to do:** Retrieve student by name.

**Requirements:**
- Search the global `students` array for a record matching the given lookup value
- Copy the matching student into `*out` (or return the pointer, per the signature) when found
- Return a clear "not found" sentinel (0/NULL) when no match exists
- Do not modify the global database or any student data

**Test cases to satisfy:**
- Lookup value exists in a populated database -> correct student returned
- Lookup value does not exist -> not-found sentinel returned
- Empty database -> not-found sentinel returned

---

## Issue #6: `get_all_students`

**File:** `src/issue_006.c`  
**Signature:** `Student* get_all_students(void);`  
**Time Complexity:** O(1)  
**Space Complexity:** O(1)

**What to do:** Get list of all students.

**Requirements:**
- Search the global `students` array for a record matching the given lookup value
- Copy the matching student into `*out` (or return the pointer, per the signature) when found
- Return a clear "not found" sentinel (0/NULL) when no match exists
- Do not modify the global database or any student data

**Test cases to satisfy:**
- Lookup value exists in a populated database -> correct student returned
- Lookup value does not exist -> not-found sentinel returned
- Empty database -> not-found sentinel returned

---

## Issue #7: `get_total_students_count`

**File:** `src/issue_007.c`  
**Signature:** `int get_total_students_count(void);`  
**Time Complexity:** O(1)  
**Space Complexity:** O(1)

**What to do:** Count total students.

**Requirements:**
- Search the global `students` array for a record matching the given lookup value
- Copy the matching student into `*out` (or return the pointer, per the signature) when found
- Return a clear "not found" sentinel (0/NULL) when no match exists
- Do not modify the global database or any student data

**Test cases to satisfy:**
- Lookup value exists in a populated database -> correct student returned
- Lookup value does not exist -> not-found sentinel returned
- Empty database -> not-found sentinel returned

---

## Issue #8: `student_exists`

**File:** `src/issue_008.c`  
**Signature:** `int student_exists(int id);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**What to do:** Check if student exists.

**Requirements:**
- Check the input value against the stated validation rule
- Return 1 if the value is valid, 0 if it is invalid
- Do not modify the global database
- Handle edge cases explicitly (empty string, boundary values, NULL)

**Test cases to satisfy:**
- Clearly valid input -> returns 1
- Clearly invalid input -> returns 0
- Boundary value (min/max of allowed range) -> returns 1
- Empty/NULL input -> returns 0

---

## Issue #9: `update_student_name`

**File:** `src/issue_009.c`  
**Signature:** `int update_student_name(int id, const char *new_name);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**What to do:** Modify student name.

**Requirements:**
- Find the target student by ID in the global `students` array
- Overwrite only the relevant field with the new value
- Return 1 if the update succeeded, 0 if the student ID was not found
- Leave all other fields and all other students unchanged

**Test cases to satisfy:**
- Existing student ID -> field updated, returns 1
- Non-existent student ID -> returns 0, no data changed
- Update does not affect other students' records

---

## Issue #10: `update_student_email`

**File:** `src/issue_010.c`  
**Signature:** `int update_student_email(int id, const char *new_email);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**What to do:** Modify student email.

**Requirements:**
- Find the target student by ID in the global `students` array
- Overwrite only the relevant field with the new value
- Return 1 if the update succeeded, 0 if the student ID was not found
- Leave all other fields and all other students unchanged

**Test cases to satisfy:**
- Existing student ID -> field updated, returns 1
- Non-existent student ID -> returns 0, no data changed
- Update does not affect other students' records

---

## Issue #11: `update_student_phone`

**File:** `src/issue_011.c`  
**Signature:** `int update_student_phone(int id, const char *new_phone);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**What to do:** Modify student phone.

**Requirements:**
- Find the target student by ID in the global `students` array
- Overwrite only the relevant field with the new value
- Return 1 if the update succeeded, 0 if the student ID was not found
- Leave all other fields and all other students unchanged

**Test cases to satisfy:**
- Existing student ID -> field updated, returns 1
- Non-existent student ID -> returns 0, no data changed
- Update does not affect other students' records

---

## Issue #12: `update_student_grade`

**File:** `src/issue_012.c`  
**Signature:** `int update_student_grade(int id, int new_grade);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**What to do:** Modify student grade.

**Requirements:**
- Find the target student by ID in the global `students` array
- Overwrite only the relevant field with the new value
- Return 1 if the update succeeded, 0 if the student ID was not found
- Leave all other fields and all other students unchanged

**Test cases to satisfy:**
- Existing student ID -> field updated, returns 1
- Non-existent student ID -> returns 0, no data changed
- Update does not affect other students' records

---

## Issue #13: `update_student_department`

**File:** `src/issue_013.c`  
**Signature:** `int update_student_department(int id, const char *new_dept);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**What to do:** Modify student department.

**Requirements:**
- Find the target student by ID in the global `students` array
- Overwrite only the relevant field with the new value
- Return 1 if the update succeeded, 0 if the student ID was not found
- Leave all other fields and all other students unchanged

**Test cases to satisfy:**
- Existing student ID -> field updated, returns 1
- Non-existent student ID -> returns 0, no data changed
- Update does not affect other students' records

---

## Issue #14: `update_student_year`

**File:** `src/issue_014.c`  
**Signature:** `int update_student_year(int id, int new_year);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**What to do:** Modify student year.

**Requirements:**
- Find the target student by ID in the global `students` array
- Overwrite only the relevant field with the new value
- Return 1 if the update succeeded, 0 if the student ID was not found
- Leave all other fields and all other students unchanged

**Test cases to satisfy:**
- Existing student ID -> field updated, returns 1
- Non-existent student ID -> returns 0, no data changed
- Update does not affect other students' records

---

## Issue #15: `print_student_details`

**File:** `src/issue_015.c`  
**Signature:** `void print_student_details(int id);`  
**Time Complexity:** O(1)  
**Space Complexity:** O(1)

**What to do:** Display single student info.

**Requirements:**
- Print the requested student information to stdout in a clear, readable format
- Handle the empty-database / not-found case gracefully (print a clear message, don't crash)

**Test cases to satisfy:**
- Populated database -> expected fields appear in printed output
- Empty database (or student not found) -> graceful message, no crash

---

## Issue #16: `print_all_students`

**File:** `src/issue_016.c`  
**Signature:** `void print_all_students(void);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**What to do:** Display all students.

**Requirements:**
- Print the requested student information to stdout in a clear, readable format
- Handle the empty-database / not-found case gracefully (print a clear message, don't crash)

**Test cases to satisfy:**
- Populated database -> expected fields appear in printed output
- Empty database (or student not found) -> graceful message, no crash

---

## Issue #17: `clear_all_students`

**File:** `src/issue_017.c`  
**Signature:** `void clear_all_students(void);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**What to do:** Delete all records.

**Requirements:**
- Reset `total_students` to 0
- Clear all student records from the global array (e.g. with `memset`)

**Test cases to satisfy:**
- Populated database -> all records cleared, total_students becomes 0
- Already-empty database -> remains empty, no crash

---

## Issue #18: `is_database_empty`

**File:** `src/issue_018.c`  
**Signature:** `int is_database_empty(void);`  
**Time Complexity:** O(1)  
**Space Complexity:** O(1)

**What to do:** Check if no students exist.

**Requirements:**
- Check the input value against the stated validation rule
- Return 1 if the value is valid, 0 if it is invalid
- Do not modify the global database
- Handle edge cases explicitly (empty string, boundary values, NULL)

**Test cases to satisfy:**
- Clearly valid input -> returns 1
- Clearly invalid input -> returns 0
- Boundary value (min/max of allowed range) -> returns 1
- Empty/NULL input -> returns 0

---

## Issue #19: `get_student_by_phone`

**File:** `src/issue_019.c`  
**Signature:** `int get_student_by_phone(const char *phone, Student *out);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**What to do:** Retrieve student by phone.

**Requirements:**
- Search the global `students` array for a record matching the given lookup value
- Copy the matching student into `*out` (or return the pointer, per the signature) when found
- Return a clear "not found" sentinel (0/NULL) when no match exists
- Do not modify the global database or any student data

**Test cases to satisfy:**
- Lookup value exists in a populated database -> correct student returned
- Lookup value does not exist -> not-found sentinel returned
- Empty database -> not-found sentinel returned

---

## Issue #20: `duplicate_student_record`

**File:** `src/issue_020.c`  
**Signature:** `int duplicate_student_record(int id);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**What to do:** Create copy of student.

**Requirements:**
- Find the source student by ID
- Append a copy of that student's fields as a new entry in the `students` array
- Increment `total_students` on success
- Return 1 on success, 0 if the source ID was not found or the database is full

**Test cases to satisfy:**
- Existing student ID -> duplicate appended, returns 1, total_students increases by 1
- Non-existent student ID -> returns 0, no change
- Full database -> returns 0

---

## Issue #21: `is_valid_student_id`

**File:** `src/issue_021.c`  
**Signature:** `int is_valid_student_id(int id);`  
**Time Complexity:** O(1)  
**Space Complexity:** O(1)

**What to do:** Validate ID format (positive integer).

**Requirements:**
- Check the input value against the stated validation rule
- Return 1 if the value is valid, 0 if it is invalid
- Do not modify the global database
- Handle edge cases explicitly (empty string, boundary values, NULL)

**Test cases to satisfy:**
- Clearly valid input -> returns 1
- Clearly invalid input -> returns 0
- Boundary value (min/max of allowed range) -> returns 1
- Empty/NULL input -> returns 0

---

## Issue #22: `is_valid_email`

**File:** `src/issue_022.c`  
**Signature:** `int is_valid_email(const char *email);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**What to do:** Validate email format.

**Requirements:**
- Check the input value against the stated validation rule
- Return 1 if the value is valid, 0 if it is invalid
- Do not modify the global database
- Handle edge cases explicitly (empty string, boundary values, NULL)

**Test cases to satisfy:**
- Clearly valid input -> returns 1
- Clearly invalid input -> returns 0
- Boundary value (min/max of allowed range) -> returns 1
- Empty/NULL input -> returns 0

---

## Issue #23: `is_valid_phone`

**File:** `src/issue_023.c`  
**Signature:** `int is_valid_phone(const char *phone);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**What to do:** Validate phone format.

**Requirements:**
- Check the input value against the stated validation rule
- Return 1 if the value is valid, 0 if it is invalid
- Do not modify the global database
- Handle edge cases explicitly (empty string, boundary values, NULL)

**Test cases to satisfy:**
- Clearly valid input -> returns 1
- Clearly invalid input -> returns 0
- Boundary value (min/max of allowed range) -> returns 1
- Empty/NULL input -> returns 0

---

## Issue #24: `is_valid_grade`

**File:** `src/issue_024.c`  
**Signature:** `int is_valid_grade(int grade);`  
**Time Complexity:** O(1)  
**Space Complexity:** O(1)

**What to do:** Validate grade (0-100 range).

**Requirements:**
- Check the input value against the stated validation rule
- Return 1 if the value is valid, 0 if it is invalid
- Do not modify the global database
- Handle edge cases explicitly (empty string, boundary values, NULL)

**Test cases to satisfy:**
- Clearly valid input -> returns 1
- Clearly invalid input -> returns 0
- Boundary value (min/max of allowed range) -> returns 1
- Empty/NULL input -> returns 0

---

## Issue #25: `is_valid_name`

**File:** `src/issue_025.c`  
**Signature:** `int is_valid_name(const char *name);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**What to do:** Validate name (non-empty, length).

**Requirements:**
- Check the input value against the stated validation rule
- Return 1 if the value is valid, 0 if it is invalid
- Do not modify the global database
- Handle edge cases explicitly (empty string, boundary values, NULL)

**Test cases to satisfy:**
- Clearly valid input -> returns 1
- Clearly invalid input -> returns 0
- Boundary value (min/max of allowed range) -> returns 1
- Empty/NULL input -> returns 0

---

## Issue #26: `is_valid_year`

**File:** `src/issue_026.c`  
**Signature:** `int is_valid_year(int year);`  
**Time Complexity:** O(1)  
**Space Complexity:** O(1)

**What to do:** Validate year (1-4).

**Requirements:**
- Check the input value against the stated validation rule
- Return 1 if the value is valid, 0 if it is invalid
- Do not modify the global database
- Handle edge cases explicitly (empty string, boundary values, NULL)

**Test cases to satisfy:**
- Clearly valid input -> returns 1
- Clearly invalid input -> returns 0
- Boundary value (min/max of allowed range) -> returns 1
- Empty/NULL input -> returns 0

---

## Issue #27: `is_valid_department`

**File:** `src/issue_027.c`  
**Signature:** `int is_valid_department(const char *dept);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**What to do:** Validate department string.

**Requirements:**
- Check the input value against the stated validation rule
- Return 1 if the value is valid, 0 if it is invalid
- Do not modify the global database
- Handle edge cases explicitly (empty string, boundary values, NULL)

**Test cases to satisfy:**
- Clearly valid input -> returns 1
- Clearly invalid input -> returns 0
- Boundary value (min/max of allowed range) -> returns 1
- Empty/NULL input -> returns 0

---

## Issue #28: `is_valid_age`

**File:** `src/issue_028.c`  
**Signature:** `int is_valid_age(int age);`  
**Time Complexity:** O(1)  
**Space Complexity:** O(1)

**What to do:** Validate age (18-60).

**Requirements:**
- Check the input value against the stated validation rule
- Return 1 if the value is valid, 0 if it is invalid
- Do not modify the global database
- Handle edge cases explicitly (empty string, boundary values, NULL)

**Test cases to satisfy:**
- Clearly valid input -> returns 1
- Clearly invalid input -> returns 0
- Boundary value (min/max of allowed range) -> returns 1
- Empty/NULL input -> returns 0

---

## Issue #29: `check_duplicate_email`

**File:** `src/issue_029.c`  
**Signature:** `int check_duplicate_email(const char *email);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**What to do:** Check if email already exists.

**Requirements:**
- Scan the `students` array for any existing record with the same field value
- Return 1 if a duplicate is found, 0 if the value is unique
- Do not modify the global database

**Test cases to satisfy:**
- Value already exists in database -> returns 1
- Value does not exist -> returns 0
- Empty database -> returns 0

---

## Issue #30: `check_duplicate_id`

**File:** `src/issue_030.c`  
**Signature:** `int check_duplicate_id(int id);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**What to do:** Check if ID already exists.

**Requirements:**
- Scan the `students` array for any existing record with the same field value
- Return 1 if a duplicate is found, 0 if the value is unique
- Do not modify the global database

**Test cases to satisfy:**
- Value already exists in database -> returns 1
- Value does not exist -> returns 0
- Empty database -> returns 0

---

## Issue #31: `check_duplicate_phone`

**File:** `src/issue_031.c`  
**Signature:** `int check_duplicate_phone(const char *phone);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**What to do:** Check if phone already exists.

**Requirements:**
- Scan the `students` array for any existing record with the same field value
- Return 1 if a duplicate is found, 0 if the value is unique
- Do not modify the global database

**Test cases to satisfy:**
- Value already exists in database -> returns 1
- Value does not exist -> returns 0
- Empty database -> returns 0

---

## Issue #32: `is_name_only_alphabetic`

**File:** `src/issue_032.c`  
**Signature:** `int is_name_only_alphabetic(const char *name);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**What to do:** Validate name has only letters.

**Requirements:**
- Check the input value against the stated validation rule
- Return 1 if the value is valid, 0 if it is invalid
- Do not modify the global database
- Handle edge cases explicitly (empty string, boundary values, NULL)

**Test cases to satisfy:**
- Clearly valid input -> returns 1
- Clearly invalid input -> returns 0
- Boundary value (min/max of allowed range) -> returns 1
- Empty/NULL input -> returns 0

---

## Issue #33: `is_email_contains_at`

**File:** `src/issue_033.c`  
**Signature:** `int is_email_contains_at(const char *email);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**What to do:** Check email has @ symbol.

**Requirements:**
- Check the input value against the stated validation rule
- Return 1 if the value is valid, 0 if it is invalid
- Do not modify the global database
- Handle edge cases explicitly (empty string, boundary values, NULL)

**Test cases to satisfy:**
- Clearly valid input -> returns 1
- Clearly invalid input -> returns 0
- Boundary value (min/max of allowed range) -> returns 1
- Empty/NULL input -> returns 0

---

## Issue #34: `is_phone_only_digits`

**File:** `src/issue_034.c`  
**Signature:** `int is_phone_only_digits(const char *phone);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**What to do:** Check phone has only digits.

**Requirements:**
- Check the input value against the stated validation rule
- Return 1 if the value is valid, 0 if it is invalid
- Do not modify the global database
- Handle edge cases explicitly (empty string, boundary values, NULL)

**Test cases to satisfy:**
- Clearly valid input -> returns 1
- Clearly invalid input -> returns 0
- Boundary value (min/max of allowed range) -> returns 1
- Empty/NULL input -> returns 0

---

## Issue #35: `is_grade_within_range`

**File:** `src/issue_035.c`  
**Signature:** `int is_grade_within_range(int grade);`  
**Time Complexity:** O(1)  
**Space Complexity:** O(1)

**What to do:** Check grade in valid range.

**Requirements:**
- Check the input value against the stated validation rule
- Return 1 if the value is valid, 0 if it is invalid
- Do not modify the global database
- Handle edge cases explicitly (empty string, boundary values, NULL)

**Test cases to satisfy:**
- Clearly valid input -> returns 1
- Clearly invalid input -> returns 0
- Boundary value (min/max of allowed range) -> returns 1
- Empty/NULL input -> returns 0

---

## Issue #36: `search_student_by_id`

**File:** `src/issue_036.c`  
**Signature:** `int search_student_by_id(int id, Student *out);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**What to do:** Find single student by ID.

**Requirements:**
- Scan the `students` array for the first record matching the search criterion
- Copy the matching student into the output parameter when found
- Return a not-found sentinel when no match exists
- Do not modify the global database

**Test cases to satisfy:**
- Match exists -> correct student returned
- No match -> not-found sentinel returned
- Multiple possible matches -> first match returned

---

## Issue #37: `search_student_by_email`

**File:** `src/issue_037.c`  
**Signature:** `int search_student_by_email(const char *email, Student *out);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**What to do:** Find single student by email.

**Requirements:**
- Scan the `students` array for the first record matching the search criterion
- Copy the matching student into the output parameter when found
- Return a not-found sentinel when no match exists
- Do not modify the global database

**Test cases to satisfy:**
- Match exists -> correct student returned
- No match -> not-found sentinel returned
- Multiple possible matches -> first match returned

---

## Issue #38: `search_student_by_name`

**File:** `src/issue_038.c`  
**Signature:** `int search_student_by_name(const char *name, Student *out);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**What to do:** Find student by name.

**Requirements:**
- Scan the `students` array for the first record matching the search criterion
- Copy the matching student into the output parameter when found
- Return a not-found sentinel when no match exists
- Do not modify the global database

**Test cases to satisfy:**
- Match exists -> correct student returned
- No match -> not-found sentinel returned
- Multiple possible matches -> first match returned

---

## Issue #39: `search_students_by_department`

**File:** `src/issue_039.c`  
**Signature:** `int search_students_by_department(const char *dept, Student *results, int max_results);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(n)

**What to do:** Find all in department.

**Requirements:**
- Scan the `students` array for all records matching the given criterion
- Copy matching students into `results` and return the count
- Return 0 when no student satisfies the criterion
- Do not write past `max_results` entries into `results`

**Test cases to satisfy:**
- Several matches -> all matching students returned, correct count
- No matches -> returns 0, empty result set
- All students match -> full set returned

---

## Issue #40: `search_students_by_year`

**File:** `src/issue_040.c`  
**Signature:** `int search_students_by_year(int year, Student *results, int max_results);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(n)

**What to do:** Find all in same year.

**Requirements:**
- Scan the `students` array for all records matching the given criterion
- Copy matching students into `results` and return the count
- Return 0 when no student satisfies the criterion
- Do not write past `max_results` entries into `results`

**Test cases to satisfy:**
- Several matches -> all matching students returned, correct count
- No matches -> returns 0, empty result set
- All students match -> full set returned

---

## Issue #41: `search_students_by_grade_range`

**File:** `src/issue_041.c`  
**Signature:** `int search_students_by_grade_range(int min_grade, int max_grade, Student *results, int max_results);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(n)

**What to do:** Find in grade range.

**Requirements:**
- Scan the `students` array for all records matching the given criterion
- Copy matching students into `results` and return the count
- Return 0 when no student satisfies the criterion
- Do not write past `max_results` entries into `results`

**Test cases to satisfy:**
- Several matches -> all matching students returned, correct count
- No matches -> returns 0, empty result set
- All students match -> full set returned

---

## Issue #42: `search_students_above_gpa`

**File:** `src/issue_042.c`  
**Signature:** `int search_students_above_gpa(int threshold, Student *results, int max_results);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(n)

**What to do:** Find with grade > threshold.

**Requirements:**
- Scan the `students` array for all records matching the given criterion
- Copy matching students into `results` and return the count
- Return 0 when no student satisfies the criterion
- Do not write past `max_results` entries into `results`

**Test cases to satisfy:**
- Several matches -> all matching students returned, correct count
- No matches -> returns 0, empty result set
- All students match -> full set returned

---

## Issue #43: `search_students_below_gpa`

**File:** `src/issue_043.c`  
**Signature:** `int search_students_below_gpa(int threshold, Student *results, int max_results);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(n)

**What to do:** Find with grade < threshold.

**Requirements:**
- Scan the `students` array for all records matching the given criterion
- Copy matching students into `results` and return the count
- Return 0 when no student satisfies the criterion
- Do not write past `max_results` entries into `results`

**Test cases to satisfy:**
- Several matches -> all matching students returned, correct count
- No matches -> returns 0, empty result set
- All students match -> full set returned

---

## Issue #44: `search_students_with_same_department`

**File:** `src/issue_044.c`  
**Signature:** `int search_students_with_same_department(const char *dept, Student *results, int max_results);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(n)

**What to do:** Group by dept.

**Requirements:**
- Scan the `students` array for all records matching the given criterion
- Copy matching students into `results` and return the count
- Return 0 when no student satisfies the criterion
- Do not write past `max_results` entries into `results`

**Test cases to satisfy:**
- Several matches -> all matching students returned, correct count
- No matches -> returns 0, empty result set
- All students match -> full set returned

---

## Issue #45: `search_first_student_in_range`

**File:** `src/issue_045.c`  
**Signature:** `int search_first_student_in_range(int min_grade, int max_grade, Student *out);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**What to do:** Get first match.

**Requirements:**
- Scan the `students` array for records matching the given range
- Return the first (or last) matching student, depending on the function
- Return a not-found sentinel when no student matches
- Do not modify the global database

**Test cases to satisfy:**
- Multiple matches -> correct edge (first/last) match returned
- Exactly one match -> that student returned
- No matches -> not-found sentinel returned

---

## Issue #46: `search_last_student_in_range`

**File:** `src/issue_046.c`  
**Signature:** `int search_last_student_in_range(int min_grade, int max_grade, Student *out);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**What to do:** Get last match.

**Requirements:**
- Scan the `students` array for records matching the given range
- Return the first (or last) matching student, depending on the function
- Return a not-found sentinel when no student matches
- Do not modify the global database

**Test cases to satisfy:**
- Multiple matches -> correct edge (first/last) match returned
- Exactly one match -> that student returned
- No matches -> not-found sentinel returned

---

## Issue #47: `count_search_results`

**File:** `src/issue_047.c`  
**Signature:** `int count_search_results(int min_grade, int max_grade);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**What to do:** Count matching records.

**Requirements:**
- Scan the `students` array and count records matching the given criterion
- Return the count as an integer
- Return 0 when no students match

**Test cases to satisfy:**
- Several matches -> correct count returned
- No matches -> returns 0
- All students match -> returns total_students

---

## Issue #48: `search_by_multiple_criteria`

**File:** `src/issue_048.c`  
**Signature:** `int search_by_multiple_criteria(const char *dept, int year, Student *results, int max_results);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**What to do:** Find by dept AND year.

**Requirements:**
- Scan the `students` array for records matching ALL given criteria (department AND year)
- Copy matching students into `results` and return the count
- Return 0 when no student satisfies every criterion
- Do not write past `max_results` entries into `results`

**Test cases to satisfy:**
- Students matching both criteria -> all and only those returned
- Students matching only one criterion -> excluded from results
- No matches -> empty result set

---

## Issue #49: `search_students_starting_with`

**File:** `src/issue_049.c`  
**Signature:** `int search_students_starting_with(char letter, Student *results, int max_results);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(n)

**What to do:** Name starts with letter.

**Requirements:**
- Scan the `students` array for all records matching the given criterion
- Copy matching students into `results` and return the count
- Return 0 when no student satisfies the criterion
- Do not write past `max_results` entries into `results`

**Test cases to satisfy:**
- Several matches -> all matching students returned, correct count
- No matches -> returns 0, empty result set
- All students match -> full set returned

---

## Issue #50: `binary_search_by_id`

**File:** `src/issue_050.c`  
**Signature:** `int binary_search_by_id(int id, Student *out);`  
**Time Complexity:** O(log n)  
**Space Complexity:** O(1)

**What to do:** Binary search on ID (assumes sorted).

**Requirements:**
- Assume `students` is already sorted by ID (see `sort_students_by_id`)
- Implement classic binary search (divide the search range in half each step)
- Copy the matching student into `*out` when found
- Return a not-found sentinel (0) when the ID is absent
- Must run in O(log n) - no linear scans

**Test cases to satisfy:**
- Target ID present -> correct student returned
- Target ID absent -> not-found sentinel returned
- Target is the first or last element -> correctly found
- Empty array -> not-found sentinel returned

---

## Issue #51: `sort_students_by_id`

**File:** `src/issue_051.c`  
**Signature:** `void sort_students_by_id(void);`  
**Time Complexity:** O(n log n)  
**Space Complexity:** O(1)

**What to do:** Sort ascending by ID.

**Requirements:**
- Sort the `students` array in place using the specified key and order
- Use a comparison-based sort (e.g. qsort, or your own O(n log n) implementation)
- After sorting, every adjacent pair must satisfy the ordering relation

**Test cases to satisfy:**
- Unsorted input -> array is sorted correctly after the call
- Already-sorted input -> array remains correctly sorted
- Array with duplicate key values -> correct relative order maintained
- Single-element or empty array -> no crash, trivially sorted

---

## Issue #52: `sort_students_by_name`

**File:** `src/issue_052.c`  
**Signature:** `void sort_students_by_name(void);`  
**Time Complexity:** O(n log n)  
**Space Complexity:** O(1)

**What to do:** Sort ascending by name.

**Requirements:**
- Sort the `students` array in place using the specified key and order
- Use a comparison-based sort (e.g. qsort, or your own O(n log n) implementation)
- After sorting, every adjacent pair must satisfy the ordering relation

**Test cases to satisfy:**
- Unsorted input -> array is sorted correctly after the call
- Already-sorted input -> array remains correctly sorted
- Array with duplicate key values -> correct relative order maintained
- Single-element or empty array -> no crash, trivially sorted

---

## Issue #53: `sort_students_by_grade`

**File:** `src/issue_053.c`  
**Signature:** `void sort_students_by_grade(void);`  
**Time Complexity:** O(n log n)  
**Space Complexity:** O(1)

**What to do:** Sort ascending by grade.

**Requirements:**
- Sort the `students` array in place using the specified key and order
- Use a comparison-based sort (e.g. qsort, or your own O(n log n) implementation)
- After sorting, every adjacent pair must satisfy the ordering relation

**Test cases to satisfy:**
- Unsorted input -> array is sorted correctly after the call
- Already-sorted input -> array remains correctly sorted
- Array with duplicate key values -> correct relative order maintained
- Single-element or empty array -> no crash, trivially sorted

---

## Issue #54: `sort_students_by_email`

**File:** `src/issue_054.c`  
**Signature:** `void sort_students_by_email(void);`  
**Time Complexity:** O(n log n)  
**Space Complexity:** O(1)

**What to do:** Sort ascending by email.

**Requirements:**
- Sort the `students` array in place using the specified key and order
- Use a comparison-based sort (e.g. qsort, or your own O(n log n) implementation)
- After sorting, every adjacent pair must satisfy the ordering relation

**Test cases to satisfy:**
- Unsorted input -> array is sorted correctly after the call
- Already-sorted input -> array remains correctly sorted
- Array with duplicate key values -> correct relative order maintained
- Single-element or empty array -> no crash, trivially sorted

---

## Issue #55: `sort_students_by_department`

**File:** `src/issue_055.c`  
**Signature:** `void sort_students_by_department(void);`  
**Time Complexity:** O(n log n)  
**Space Complexity:** O(1)

**What to do:** Sort ascending by dept.

**Requirements:**
- Sort the `students` array in place using the specified key and order
- Use a comparison-based sort (e.g. qsort, or your own O(n log n) implementation)
- After sorting, every adjacent pair must satisfy the ordering relation

**Test cases to satisfy:**
- Unsorted input -> array is sorted correctly after the call
- Already-sorted input -> array remains correctly sorted
- Array with duplicate key values -> correct relative order maintained
- Single-element or empty array -> no crash, trivially sorted

---

## Issue #56: `sort_students_by_year`

**File:** `src/issue_056.c`  
**Signature:** `void sort_students_by_year(void);`  
**Time Complexity:** O(n log n)  
**Space Complexity:** O(1)

**What to do:** Sort ascending by year.

**Requirements:**
- Sort the `students` array in place using the specified key and order
- Use a comparison-based sort (e.g. qsort, or your own O(n log n) implementation)
- After sorting, every adjacent pair must satisfy the ordering relation

**Test cases to satisfy:**
- Unsorted input -> array is sorted correctly after the call
- Already-sorted input -> array remains correctly sorted
- Array with duplicate key values -> correct relative order maintained
- Single-element or empty array -> no crash, trivially sorted

---

## Issue #57: `sort_descending_by_grade`

**File:** `src/issue_057.c`  
**Signature:** `void sort_descending_by_grade(void);`  
**Time Complexity:** O(n log n)  
**Space Complexity:** O(1)

**What to do:** Sort descending by grade.

**Requirements:**
- Sort the `students` array in place using the specified key and order
- Use a comparison-based sort (e.g. qsort, or your own O(n log n) implementation)
- After sorting, every adjacent pair must satisfy the ordering relation

**Test cases to satisfy:**
- Unsorted input -> array is sorted correctly after the call
- Already-sorted input -> array remains correctly sorted
- Array with duplicate key values -> correct relative order maintained
- Single-element or empty array -> no crash, trivially sorted

---

## Issue #58: `sort_descending_by_name`

**File:** `src/issue_058.c`  
**Signature:** `void sort_descending_by_name(void);`  
**Time Complexity:** O(n log n)  
**Space Complexity:** O(1)

**What to do:** Sort descending by name.

**Requirements:**
- Sort the `students` array in place using the specified key and order
- Use a comparison-based sort (e.g. qsort, or your own O(n log n) implementation)
- After sorting, every adjacent pair must satisfy the ordering relation

**Test cases to satisfy:**
- Unsorted input -> array is sorted correctly after the call
- Already-sorted input -> array remains correctly sorted
- Array with duplicate key values -> correct relative order maintained
- Single-element or empty array -> no crash, trivially sorted

---

## Issue #59: `sort_by_grade_then_name`

**File:** `src/issue_059.c`  
**Signature:** `void sort_by_grade_then_name(void);`  
**Time Complexity:** O(n log n)  
**Space Complexity:** O(1)

**What to do:** Multi-key sort.

**Requirements:**
- Sort the `students` array in place using the specified key and order
- Use a comparison-based sort (e.g. qsort, or your own O(n log n) implementation)
- After sorting, every adjacent pair must satisfy the ordering relation

**Test cases to satisfy:**
- Unsorted input -> array is sorted correctly after the call
- Already-sorted input -> array remains correctly sorted
- Array with duplicate key values -> correct relative order maintained
- Single-element or empty array -> no crash, trivially sorted

---

## Issue #60: `is_student_array_sorted`

**File:** `src/issue_060.c`  
**Signature:** `int is_student_array_sorted(void);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**What to do:** Check if sorted by ID.

**Requirements:**
- Check the input value against the stated validation rule
- Return 1 if the value is valid, 0 if it is invalid
- Do not modify the global database
- Handle edge cases explicitly (empty string, boundary values, NULL)

**Test cases to satisfy:**
- Clearly valid input -> returns 1
- Clearly invalid input -> returns 0
- Boundary value (min/max of allowed range) -> returns 1
- Empty/NULL input -> returns 0

---

## Issue #61: `get_median_grade`

**File:** `src/issue_061.c`  
**Signature:** `int get_median_grade(void);`  
**Time Complexity:** O(n log n)  
**Space Complexity:** O(1)

**What to do:** Get middle grade value.

**Requirements:**
- Compute the requested statistic over the `grade` field (or relevant field) of all students
- Return the computed value using the type in the signature (int/double)
- Define sensible behavior for an empty database (e.g. return 0)
- Do not modify the global database

**Test cases to satisfy:**
- Populated database with varied grades -> statistic matches manual calculation
- Empty database -> documented sentinel value returned, no crash
- Single-student database -> statistic equals that student's value where applicable

---

## Issue #62: `get_mode_grade`

**File:** `src/issue_062.c`  
**Signature:** `int get_mode_grade(void);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(n)

**What to do:** Get most frequent grade.

**Requirements:**
- Compute the requested statistic over the `grade` field (or relevant field) of all students
- Return the computed value using the type in the signature (int/double)
- Define sensible behavior for an empty database (e.g. return 0)
- Do not modify the global database

**Test cases to satisfy:**
- Populated database with varied grades -> statistic matches manual calculation
- Empty database -> documented sentinel value returned, no crash
- Single-student database -> statistic equals that student's value where applicable

---

## Issue #63: `calculate_average_grade`

**File:** `src/issue_063.c`  
**Signature:** `double calculate_average_grade(void);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**What to do:** Mean of all grades.

**Requirements:**
- Compute the requested statistic over the `grade` field (or relevant field) of all students
- Return the computed value using the type in the signature (int/double)
- Define sensible behavior for an empty database (e.g. return 0)
- Do not modify the global database

**Test cases to satisfy:**
- Populated database with varied grades -> statistic matches manual calculation
- Empty database -> documented sentinel value returned, no crash
- Single-student database -> statistic equals that student's value where applicable

---

## Issue #64: `get_max_grade`

**File:** `src/issue_064.c`  
**Signature:** `int get_max_grade(void);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**What to do:** Highest grade.

**Requirements:**
- Compute the requested statistic over the `grade` field (or relevant field) of all students
- Return the computed value using the type in the signature (int/double)
- Define sensible behavior for an empty database (e.g. return 0)
- Do not modify the global database

**Test cases to satisfy:**
- Populated database with varied grades -> statistic matches manual calculation
- Empty database -> documented sentinel value returned, no crash
- Single-student database -> statistic equals that student's value where applicable

---

## Issue #65: `get_min_grade`

**File:** `src/issue_065.c`  
**Signature:** `int get_min_grade(void);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**What to do:** Lowest grade.

**Requirements:**
- Compute the requested statistic over the `grade` field (or relevant field) of all students
- Return the computed value using the type in the signature (int/double)
- Define sensible behavior for an empty database (e.g. return 0)
- Do not modify the global database

**Test cases to satisfy:**
- Populated database with varied grades -> statistic matches manual calculation
- Empty database -> documented sentinel value returned, no crash
- Single-student database -> statistic equals that student's value where applicable

---

## Issue #66: `get_grade_range`

**File:** `src/issue_066.c`  
**Signature:** `int get_grade_range(void);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**What to do:** Max - Min.

**Requirements:**
- Compute the requested statistic over the `grade` field (or relevant field) of all students
- Return the computed value using the type in the signature (int/double)
- Define sensible behavior for an empty database (e.g. return 0)
- Do not modify the global database

**Test cases to satisfy:**
- Populated database with varied grades -> statistic matches manual calculation
- Empty database -> documented sentinel value returned, no crash
- Single-student database -> statistic equals that student's value where applicable

---

## Issue #67: `get_student_rank`

**File:** `src/issue_067.c`  
**Signature:** `int get_student_rank(int id);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**What to do:** Rank by grade (1 = highest).

**Requirements:**
- Compute the requested statistic over the `grade` field (or relevant field) of all students
- Return the computed value using the type in the signature (int/double)
- Define sensible behavior for an empty database (e.g. return 0)
- Do not modify the global database

**Test cases to satisfy:**
- Populated database with varied grades -> statistic matches manual calculation
- Empty database -> documented sentinel value returned, no crash
- Single-student database -> statistic equals that student's value where applicable

---

## Issue #68: `get_student_percentile`

**File:** `src/issue_068.c`  
**Signature:** `double get_student_percentile(int id);`  
**Time Complexity:** O(n log n)  
**Space Complexity:** O(1)

**What to do:** Percentile rank.

**Requirements:**
- Compute the requested statistic over the `grade` field (or relevant field) of all students
- Return the computed value using the type in the signature (int/double)
- Define sensible behavior for an empty database (e.g. return 0)
- Do not modify the global database

**Test cases to satisfy:**
- Populated database with varied grades -> statistic matches manual calculation
- Empty database -> documented sentinel value returned, no crash
- Single-student database -> statistic equals that student's value where applicable

---

## Issue #69: `count_students_passed`

**File:** `src/issue_069.c`  
**Signature:** `int count_students_passed(void);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**What to do:** Count with grade >= 60.

**Requirements:**
- Compute the requested statistic over the `grade` field (or relevant field) of all students
- Return the computed value using the type in the signature (int/double)
- Define sensible behavior for an empty database (e.g. return 0)
- Do not modify the global database

**Test cases to satisfy:**
- Populated database with varied grades -> statistic matches manual calculation
- Empty database -> documented sentinel value returned, no crash
- Single-student database -> statistic equals that student's value where applicable

---

## Issue #70: `count_students_failed`

**File:** `src/issue_070.c`  
**Signature:** `int count_students_failed(void);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**What to do:** Count with grade < 60.

**Requirements:**
- Compute the requested statistic over the `grade` field (or relevant field) of all students
- Return the computed value using the type in the signature (int/double)
- Define sensible behavior for an empty database (e.g. return 0)
- Do not modify the global database

**Test cases to satisfy:**
- Populated database with varied grades -> statistic matches manual calculation
- Empty database -> documented sentinel value returned, no crash
- Single-student database -> statistic equals that student's value where applicable

---

## Issue #71: `get_pass_percentage`

**File:** `src/issue_071.c`  
**Signature:** `double get_pass_percentage(void);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**What to do:** % of students passed.

**Requirements:**
- Compute the requested statistic over the `grade` field (or relevant field) of all students
- Return the computed value using the type in the signature (int/double)
- Define sensible behavior for an empty database (e.g. return 0)
- Do not modify the global database

**Test cases to satisfy:**
- Populated database with varied grades -> statistic matches manual calculation
- Empty database -> documented sentinel value returned, no crash
- Single-student database -> statistic equals that student's value where applicable

---

## Issue #72: `get_pass_fail_ratio`

**File:** `src/issue_072.c`  
**Signature:** `double get_pass_fail_ratio(void);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**What to do:** Ratio of pass:fail.

**Requirements:**
- Compute the requested statistic over the `grade` field (or relevant field) of all students
- Return the computed value using the type in the signature (int/double)
- Define sensible behavior for an empty database (e.g. return 0)
- Do not modify the global database

**Test cases to satisfy:**
- Populated database with varied grades -> statistic matches manual calculation
- Empty database -> documented sentinel value returned, no crash
- Single-student database -> statistic equals that student's value where applicable

---

## Issue #73: `get_average_by_department`

**File:** `src/issue_073.c`  
**Signature:** `double get_average_by_department(const char *dept);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(n)

**What to do:** Average grade per dept.

**Requirements:**
- Compute the requested statistic over the `grade` field (or relevant field) of all students
- Return the computed value using the type in the signature (int/double)
- Define sensible behavior for an empty database (e.g. return 0)
- Do not modify the global database

**Test cases to satisfy:**
- Populated database with varied grades -> statistic matches manual calculation
- Empty database -> documented sentinel value returned, no crash
- Single-student database -> statistic equals that student's value where applicable

---

## Issue #74: `get_students_per_department`

**File:** `src/issue_074.c`  
**Signature:** `int get_students_per_department(const char *dept);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(n)

**What to do:** Count per dept.

**Requirements:**
- Compute the requested statistic over the `grade` field (or relevant field) of all students
- Return the computed value using the type in the signature (int/double)
- Define sensible behavior for an empty database (e.g. return 0)
- Do not modify the global database

**Test cases to satisfy:**
- Populated database with varied grades -> statistic matches manual calculation
- Empty database -> documented sentinel value returned, no crash
- Single-student database -> statistic equals that student's value where applicable

---

## Issue #75: `get_top_performer_name`

**File:** `src/issue_075.c`  
**Signature:** `char* get_top_performer_name(void);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**What to do:** Name of highest grade.

**Requirements:**
- Compute the requested statistic over the `grade` field (or relevant field) of all students
- Return the computed value using the type in the signature (int/double)
- Define sensible behavior for an empty database (e.g. return 0)
- Do not modify the global database

**Test cases to satisfy:**
- Populated database with varied grades -> statistic matches manual calculation
- Empty database -> documented sentinel value returned, no crash
- Single-student database -> statistic equals that student's value where applicable

---

## Issue #76: `get_bottom_performer_name`

**File:** `src/issue_076.c`  
**Signature:** `char* get_bottom_performer_name(void);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**What to do:** Name of lowest grade.

**Requirements:**
- Compute the requested statistic over the `grade` field (or relevant field) of all students
- Return the computed value using the type in the signature (int/double)
- Define sensible behavior for an empty database (e.g. return 0)
- Do not modify the global database

**Test cases to satisfy:**
- Populated database with varied grades -> statistic matches manual calculation
- Empty database -> documented sentinel value returned, no crash
- Single-student database -> statistic equals that student's value where applicable

---

## Issue #77: `calculate_standard_deviation`

**File:** `src/issue_077.c`  
**Signature:** `double calculate_standard_deviation(void);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**What to do:** Std dev of grades.

**Requirements:**
- Compute the requested statistic over the `grade` field (or relevant field) of all students
- Return the computed value using the type in the signature (int/double)
- Define sensible behavior for an empty database (e.g. return 0)
- Do not modify the global database

**Test cases to satisfy:**
- Populated database with varied grades -> statistic matches manual calculation
- Empty database -> documented sentinel value returned, no crash
- Single-student database -> statistic equals that student's value where applicable

---

## Issue #78: `get_honor_roll_count`

**File:** `src/issue_078.c`  
**Signature:** `int get_honor_roll_count(void);`  
**Time Complexity:** O(n log n)  
**Space Complexity:** O(1)

**What to do:** Count of top 10% students.

**Requirements:**
- Compute the requested statistic over the `grade` field (or relevant field) of all students
- Return the computed value using the type in the signature (int/double)
- Define sensible behavior for an empty database (e.g. return 0)
- Do not modify the global database

**Test cases to satisfy:**
- Populated database with varied grades -> statistic matches manual calculation
- Empty database -> documented sentinel value returned, no crash
- Single-student database -> statistic equals that student's value where applicable

---

## Issue #79: `get_gpa_statistics`

**File:** `src/issue_079.c`  
**Signature:** `double get_gpa_statistics(void);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**What to do:** Min/max/avg combined.

**Requirements:**
- Compute the requested statistic over the `grade` field (or relevant field) of all students
- Return the computed value using the type in the signature (int/double)
- Define sensible behavior for an empty database (e.g. return 0)
- Do not modify the global database

**Test cases to satisfy:**
- Populated database with varied grades -> statistic matches manual calculation
- Empty database -> documented sentinel value returned, no crash
- Single-student database -> statistic equals that student's value where applicable

---

## Issue #80: `count_students_in_range`

**File:** `src/issue_080.c`  
**Signature:** `int count_students_in_range(int min_grade, int max_grade);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**What to do:** Count in grade range.

**Requirements:**
- Compute the requested statistic over the `grade` field (or relevant field) of all students
- Return the computed value using the type in the signature (int/double)
- Define sensible behavior for an empty database (e.g. return 0)
- Do not modify the global database

**Test cases to satisfy:**
- Populated database with varied grades -> statistic matches manual calculation
- Empty database -> documented sentinel value returned, no crash
- Single-student database -> statistic equals that student's value where applicable

---

## Issue #81: `string_to_uppercase`

**File:** `src/issue_081.c`  
**Signature:** `char* string_to_uppercase(char *str);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(n)

**What to do:** Convert string to uppercase.

**Requirements:**
- Operate on the `char*`/string input(s) - NOT the global students array
- Follow standard C string conventions (null-terminated, no buffer overrun)
- Return the result as specified by the signature (string, count, boolean, or index)
- Handle empty strings safely

**Test cases to satisfy:**
- Typical non-empty string -> correct result
- Empty string ("") -> correct edge-case result
- String with mixed/edge-case characters (spaces, punctuation, case) -> handled correctly

---

## Issue #82: `string_to_lowercase`

**File:** `src/issue_082.c`  
**Signature:** `char* string_to_lowercase(char *str);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(n)

**What to do:** Convert string to lowercase.

**Requirements:**
- Operate on the `char*`/string input(s) - NOT the global students array
- Follow standard C string conventions (null-terminated, no buffer overrun)
- Return the result as specified by the signature (string, count, boolean, or index)
- Handle empty strings safely

**Test cases to satisfy:**
- Typical non-empty string -> correct result
- Empty string ("") -> correct edge-case result
- String with mixed/edge-case characters (spaces, punctuation, case) -> handled correctly

---

## Issue #83: `trim_whitespace`

**File:** `src/issue_083.c`  
**Signature:** `char* trim_whitespace(char *str);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(n)

**What to do:** Remove leading/trailing spaces.

**Requirements:**
- Operate on the `char*`/string input(s) - NOT the global students array
- Follow standard C string conventions (null-terminated, no buffer overrun)
- Return the result as specified by the signature (string, count, boolean, or index)
- Handle empty strings safely

**Test cases to satisfy:**
- Typical non-empty string -> correct result
- Empty string ("") -> correct edge-case result
- String with mixed/edge-case characters (spaces, punctuation, case) -> handled correctly

---

## Issue #84: `reverse_string`

**File:** `src/issue_084.c`  
**Signature:** `char* reverse_string(char *str);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(n)

**What to do:** Reverse all characters.

**Requirements:**
- Operate on the `char*`/string input(s) - NOT the global students array
- Follow standard C string conventions (null-terminated, no buffer overrun)
- Return the result as specified by the signature (string, count, boolean, or index)
- Handle empty strings safely

**Test cases to satisfy:**
- Typical non-empty string -> correct result
- Empty string ("") -> correct edge-case result
- String with mixed/edge-case characters (spaces, punctuation, case) -> handled correctly

---

## Issue #85: `get_string_length`

**File:** `src/issue_085.c`  
**Signature:** `int get_string_length(const char *str);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**What to do:** Count characters.

**Requirements:**
- Operate on the `char*`/string input(s) - NOT the global students array
- Follow standard C string conventions (null-terminated, no buffer overrun)
- Return the result as specified by the signature (string, count, boolean, or index)
- Handle empty strings safely

**Test cases to satisfy:**
- Typical non-empty string -> correct result
- Empty string ("") -> correct edge-case result
- String with mixed/edge-case characters (spaces, punctuation, case) -> handled correctly

---

## Issue #86: `compare_strings`

**File:** `src/issue_086.c`  
**Signature:** `int compare_strings(const char *str1, const char *str2);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**What to do:** Case-sensitive comparison.

**Requirements:**
- Operate on the `char*`/string input(s) - NOT the global students array
- Follow standard C string conventions (null-terminated, no buffer overrun)
- Return the result as specified by the signature (string, count, boolean, or index)
- Handle empty strings safely

**Test cases to satisfy:**
- Typical non-empty string -> correct result
- Empty string ("") -> correct edge-case result
- String with mixed/edge-case characters (spaces, punctuation, case) -> handled correctly

---

## Issue #87: `compare_strings_ignore_case`

**File:** `src/issue_087.c`  
**Signature:** `int compare_strings_ignore_case(const char *str1, const char *str2);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**What to do:** Case-insensitive comparison.

**Requirements:**
- Operate on the `char*`/string input(s) - NOT the global students array
- Follow standard C string conventions (null-terminated, no buffer overrun)
- Return the result as specified by the signature (string, count, boolean, or index)
- Handle empty strings safely

**Test cases to satisfy:**
- Typical non-empty string -> correct result
- Empty string ("") -> correct edge-case result
- String with mixed/edge-case characters (spaces, punctuation, case) -> handled correctly

---

## Issue #88: `get_substring`

**File:** `src/issue_088.c`  
**Signature:** `char* get_substring(const char *str, int start, int length);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(n)

**What to do:** Extract portion of string.

**Requirements:**
- Operate on the `char*`/string input(s) - NOT the global students array
- Follow standard C string conventions (null-terminated, no buffer overrun)
- Return the result as specified by the signature (string, count, boolean, or index)
- Handle empty strings safely

**Test cases to satisfy:**
- Typical non-empty string -> correct result
- Empty string ("") -> correct edge-case result
- String with mixed/edge-case characters (spaces, punctuation, case) -> handled correctly

---

## Issue #89: `count_vowels_in_string`

**File:** `src/issue_089.c`  
**Signature:** `int count_vowels_in_string(const char *str);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**What to do:** Count vowels (a,e,i,o,u).

**Requirements:**
- Operate on the `char*`/string input(s) - NOT the global students array
- Follow standard C string conventions (null-terminated, no buffer overrun)
- Return the result as specified by the signature (string, count, boolean, or index)
- Handle empty strings safely

**Test cases to satisfy:**
- Typical non-empty string -> correct result
- Empty string ("") -> correct edge-case result
- String with mixed/edge-case characters (spaces, punctuation, case) -> handled correctly

---

## Issue #90: `count_consonants_in_string`

**File:** `src/issue_090.c`  
**Signature:** `int count_consonants_in_string(const char *str);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**What to do:** Count consonants.

**Requirements:**
- Operate on the `char*`/string input(s) - NOT the global students array
- Follow standard C string conventions (null-terminated, no buffer overrun)
- Return the result as specified by the signature (string, count, boolean, or index)
- Handle empty strings safely

**Test cases to satisfy:**
- Typical non-empty string -> correct result
- Empty string ("") -> correct edge-case result
- String with mixed/edge-case characters (spaces, punctuation, case) -> handled correctly

---

## Issue #91: `is_palindrome`

**File:** `src/issue_091.c`  
**Signature:** `int is_palindrome(const char *str);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**What to do:** Check if string reads same backwards.

**Requirements:**
- Check the input value against the stated validation rule
- Return 1 if the value is valid, 0 if it is invalid
- Do not modify the global database
- Handle edge cases explicitly (empty string, boundary values, NULL)

**Test cases to satisfy:**
- Clearly valid input -> returns 1
- Clearly invalid input -> returns 0
- Boundary value (min/max of allowed range) -> returns 1
- Empty/NULL input -> returns 0

---

## Issue #92: `concatenate_strings`

**File:** `src/issue_092.c`  
**Signature:** `char* concatenate_strings(const char *str1, const char *str2);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(n)

**What to do:** Join two strings.

**Requirements:**
- Operate on the `char*`/string input(s) - NOT the global students array
- Follow standard C string conventions (null-terminated, no buffer overrun)
- Return the result as specified by the signature (string, count, boolean, or index)
- Handle empty strings safely

**Test cases to satisfy:**
- Typical non-empty string -> correct result
- Empty string ("") -> correct edge-case result
- String with mixed/edge-case characters (spaces, punctuation, case) -> handled correctly

---

## Issue #93: `find_character_position`

**File:** `src/issue_093.c`  
**Signature:** `int find_character_position(const char *str, char c);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**What to do:** Find index of char in string.

**Requirements:**
- Operate on the `char*`/string input(s) - NOT the global students array
- Follow standard C string conventions (null-terminated, no buffer overrun)
- Return the result as specified by the signature (string, count, boolean, or index)
- Handle empty strings safely

**Test cases to satisfy:**
- Typical non-empty string -> correct result
- Empty string ("") -> correct edge-case result
- String with mixed/edge-case characters (spaces, punctuation, case) -> handled correctly

---

## Issue #94: `count_character_occurrences`

**File:** `src/issue_094.c`  
**Signature:** `int count_character_occurrences(const char *str, char c);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**What to do:** Count specific char.

**Requirements:**
- Operate on the `char*`/string input(s) - NOT the global students array
- Follow standard C string conventions (null-terminated, no buffer overrun)
- Return the result as specified by the signature (string, count, boolean, or index)
- Handle empty strings safely

**Test cases to satisfy:**
- Typical non-empty string -> correct result
- Empty string ("") -> correct edge-case result
- String with mixed/edge-case characters (spaces, punctuation, case) -> handled correctly

---

## Issue #95: `string_contains_substring`

**File:** `src/issue_095.c`  
**Signature:** `int string_contains_substring(const char *str, const char *substr);`  
**Time Complexity:** O(n*m)  
**Space Complexity:** O(1)

**What to do:** Check if substring exists.

**Requirements:**
- Operate on the `char*`/string input(s) - NOT the global students array
- Follow standard C string conventions (null-terminated, no buffer overrun)
- Return the result as specified by the signature (string, count, boolean, or index)
- Handle empty strings safely

**Test cases to satisfy:**
- Typical non-empty string -> correct result
- Empty string ("") -> correct edge-case result
- String with mixed/edge-case characters (spaces, punctuation, case) -> handled correctly

---

## Issue #96: `filter_students_by_gpa_above`

**File:** `src/issue_096.c`  
**Signature:** `int filter_students_by_gpa_above(int threshold, Student *results, int max_results);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(n)

**What to do:** Get all with grade > X.

**Requirements:**
- Scan the `students` array and select all records matching the filter condition
- Copy matching students into `results` and return the count
- Return 0 when no student satisfies the filter
- Do not write past `max_results` entries into `results`

**Test cases to satisfy:**
- Some students match the filter -> only matching students returned
- No students match -> empty result, count 0
- All students match -> full set returned

---

## Issue #97: `filter_students_by_gpa_below`

**File:** `src/issue_097.c`  
**Signature:** `int filter_students_by_gpa_below(int threshold, Student *results, int max_results);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(n)

**What to do:** Get all with grade < X.

**Requirements:**
- Scan the `students` array and select all records matching the filter condition
- Copy matching students into `results` and return the count
- Return 0 when no student satisfies the filter
- Do not write past `max_results` entries into `results`

**Test cases to satisfy:**
- Some students match the filter -> only matching students returned
- No students match -> empty result, count 0
- All students match -> full set returned

---

## Issue #98: `filter_active_students`

**File:** `src/issue_098.c`  
**Signature:** `int filter_active_students(Student *results, int max_results);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(n)

**What to do:** Get only active status.

**Requirements:**
- Scan the `students` array and select all records matching the filter condition
- Copy matching students into `results` and return the count
- Return 0 when no student satisfies the filter
- Do not write past `max_results` entries into `results`

**Test cases to satisfy:**
- Some students match the filter -> only matching students returned
- No students match -> empty result, count 0
- All students match -> full set returned

---

## Issue #99: `filter_inactive_students`

**File:** `src/issue_099.c`  
**Signature:** `int filter_inactive_students(Student *results, int max_results);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(n)

**What to do:** Get only inactive status.

**Requirements:**
- Scan the `students` array and select all records matching the filter condition
- Copy matching students into `results` and return the count
- Return 0 when no student satisfies the filter
- Do not write past `max_results` entries into `results`

**Test cases to satisfy:**
- Some students match the filter -> only matching students returned
- No students match -> empty result, count 0
- All students match -> full set returned

---

## Issue #100: `filter_students_with_scholarship`

**File:** `src/issue_100.c`  
**Signature:** `int filter_students_with_scholarship(Student *results, int max_results);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(n)

**What to do:** Get scholarship holders.

**Requirements:**
- Scan the `students` array and select all records matching the filter condition
- Copy matching students into `results` and return the count
- Return 0 when no student satisfies the filter
- Do not write past `max_results` entries into `results`

**Test cases to satisfy:**
- Some students match the filter -> only matching students returned
- No students match -> empty result, count 0
- All students match -> full set returned

---

## Issue #101: `filter_students_without_scholarship`

**File:** `src/issue_101.c`  
**Signature:** `int filter_students_without_scholarship(Student *results, int max_results);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(n)

**What to do:** Get non-scholarship.

**Requirements:**
- Scan the `students` array and select all records matching the filter condition
- Copy matching students into `results` and return the count
- Return 0 when no student satisfies the filter
- Do not write past `max_results` entries into `results`

**Test cases to satisfy:**
- Some students match the filter -> only matching students returned
- No students match -> empty result, count 0
- All students match -> full set returned

---

## Issue #102: `filter_by_name_first_letter`

**File:** `src/issue_102.c`  
**Signature:** `int filter_by_name_first_letter(char letter, Student *results, int max_results);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(n)

**What to do:** Name starts with letter.

**Requirements:**
- Scan the `students` array and select all records matching the filter condition
- Copy matching students into `results` and return the count
- Return 0 when no student satisfies the filter
- Do not write past `max_results` entries into `results`

**Test cases to satisfy:**
- Some students match the filter -> only matching students returned
- No students match -> empty result, count 0
- All students match -> full set returned

---

## Issue #103: `filter_by_name_length`

**File:** `src/issue_103.c`  
**Signature:** `int filter_by_name_length(int length, Student *results, int max_results);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(n)

**What to do:** Name has specific length.

**Requirements:**
- Scan the `students` array and select all records matching the filter condition
- Copy matching students into `results` and return the count
- Return 0 when no student satisfies the filter
- Do not write past `max_results` entries into `results`

**Test cases to satisfy:**
- Some students match the filter -> only matching students returned
- No students match -> empty result, count 0
- All students match -> full set returned

---

## Issue #104: `filter_students_by_department`

**File:** `src/issue_104.c`  
**Signature:** `int filter_students_by_department(const char *dept, Student *results, int max_results);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(n)

**What to do:** Get specific dept.

**Requirements:**
- Scan the `students` array and select all records matching the filter condition
- Copy matching students into `results` and return the count
- Return 0 when no student satisfies the filter
- Do not write past `max_results` entries into `results`

**Test cases to satisfy:**
- Some students match the filter -> only matching students returned
- No students match -> empty result, count 0
- All students match -> full set returned

---

## Issue #105: `filter_students_enrolled_after`

**File:** `src/issue_105.c`  
**Signature:** `int filter_students_enrolled_after(int year, Student *results, int max_results);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(n)

**What to do:** Enrollment date filter.

**Requirements:**
- Scan the `students` array and select all records matching the filter condition
- Copy matching students into `results` and return the count
- Return 0 when no student satisfies the filter
- Do not write past `max_results` entries into `results`

**Test cases to satisfy:**
- Some students match the filter -> only matching students returned
- No students match -> empty result, count 0
- All students match -> full set returned

---

## Issue #106: `filter_distinct_departments`

**File:** `src/issue_106.c`  
**Signature:** `int filter_distinct_departments(char *results[]);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(n)

**What to do:** Get unique departments.

**Requirements:**
- Scan the `students` array and select all records matching the filter condition
- Copy matching students into `results` and return the count
- Return 0 when no student satisfies the filter
- Do not write past `max_results` entries into `results`

**Test cases to satisfy:**
- Some students match the filter -> only matching students returned
- No students match -> empty result, count 0
- All students match -> full set returned

---

## Issue #107: `filter_students_same_grade`

**File:** `src/issue_107.c`  
**Signature:** `int filter_students_same_grade(int grade, Student *results, int max_results);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(n)

**What to do:** Group by exact grade.

**Requirements:**
- Scan the `students` array and select all records matching the filter condition
- Copy matching students into `results` and return the count
- Return 0 when no student satisfies the filter
- Do not write past `max_results` entries into `results`

**Test cases to satisfy:**
- Some students match the filter -> only matching students returned
- No students match -> empty result, count 0
- All students match -> full set returned

---

## Issue #108: `get_highest_grade_in_department`

**File:** `src/issue_108.c`  
**Signature:** `int get_highest_grade_in_department(const char *dept);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**What to do:** Max grade in dept.

**Requirements:**
- Combine existing building blocks (search/filter/sort/stats) as needed to compute the result
- Return the result using the type in the signature
- Handle empty-database and no-match cases explicitly
- Do not modify the global database unless the function is explicitly a mutator

**Test cases to satisfy:**
- Typical populated database -> result matches manual/expected calculation
- Empty database -> documented sentinel/edge-case behavior, no crash
- Edge case relevant to the function (ties, single department, N larger than total_students, etc.) handled correctly

---

## Issue #109: `get_lowest_grade_in_department`

**File:** `src/issue_109.c`  
**Signature:** `int get_lowest_grade_in_department(const char *dept);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**What to do:** Min grade in dept.

**Requirements:**
- Combine existing building blocks (search/filter/sort/stats) as needed to compute the result
- Return the result using the type in the signature
- Handle empty-database and no-match cases explicitly
- Do not modify the global database unless the function is explicitly a mutator

**Test cases to satisfy:**
- Typical populated database -> result matches manual/expected calculation
- Empty database -> documented sentinel/edge-case behavior, no crash
- Edge case relevant to the function (ties, single department, N larger than total_students, etc.) handled correctly

---

## Issue #110: `compare_two_students`

**File:** `src/issue_110.c`  
**Signature:** `int compare_two_students(int id1, int id2);`  
**Time Complexity:** O(1)  
**Space Complexity:** O(1)

**What to do:** Compare any two records.

**Requirements:**
- Combine existing building blocks (search/filter/sort/stats) as needed to compute the result
- Return the result using the type in the signature
- Handle empty-database and no-match cases explicitly
- Do not modify the global database unless the function is explicitly a mutator

**Test cases to satisfy:**
- Typical populated database -> result matches manual/expected calculation
- Empty database -> documented sentinel/edge-case behavior, no crash
- Edge case relevant to the function (ties, single department, N larger than total_students, etc.) handled correctly

---

## Issue #111: `get_students_with_same_name`

**File:** `src/issue_111.c`  
**Signature:** `int get_students_with_same_name(const char *name, Student *results, int max_results);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(n)

**What to do:** Find duplicates.

**Requirements:**
- Combine existing building blocks (search/filter/sort/stats) as needed to compute the result
- Return the result using the type in the signature
- Handle empty-database and no-match cases explicitly
- Do not modify the global database unless the function is explicitly a mutator

**Test cases to satisfy:**
- Typical populated database -> result matches manual/expected calculation
- Empty database -> documented sentinel/edge-case behavior, no crash
- Edge case relevant to the function (ties, single department, N larger than total_students, etc.) handled correctly

---

## Issue #112: `get_students_same_department_and_year`

**File:** `src/issue_112.c`  
**Signature:** `int get_students_same_department_and_year(const char *dept, int year, Student *results, int max_results);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(n)

**What to do:** Multi-filter.

**Requirements:**
- Combine existing building blocks (search/filter/sort/stats) as needed to compute the result
- Return the result using the type in the signature
- Handle empty-database and no-match cases explicitly
- Do not modify the global database unless the function is explicitly a mutator

**Test cases to satisfy:**
- Typical populated database -> result matches manual/expected calculation
- Empty database -> documented sentinel/edge-case behavior, no crash
- Edge case relevant to the function (ties, single department, N larger than total_students, etc.) handled correctly

---

## Issue #113: `find_grade_closest_to_average`

**File:** `src/issue_113.c`  
**Signature:** `int find_grade_closest_to_average(Student *out);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**What to do:** Closest to mean.

**Requirements:**
- Combine existing building blocks (search/filter/sort/stats) as needed to compute the result
- Return the result using the type in the signature
- Handle empty-database and no-match cases explicitly
- Do not modify the global database unless the function is explicitly a mutator

**Test cases to satisfy:**
- Typical populated database -> result matches manual/expected calculation
- Empty database -> documented sentinel/edge-case behavior, no crash
- Edge case relevant to the function (ties, single department, N larger than total_students, etc.) handled correctly

---

## Issue #114: `compare_grades_between_departments`

**File:** `src/issue_114.c`  
**Signature:** `int compare_grades_between_departments(const char *dept1, const char *dept2);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**What to do:** Dept comparison.

**Requirements:**
- Combine existing building blocks (search/filter/sort/stats) as needed to compute the result
- Return the result using the type in the signature
- Handle empty-database and no-match cases explicitly
- Do not modify the global database unless the function is explicitly a mutator

**Test cases to satisfy:**
- Typical populated database -> result matches manual/expected calculation
- Empty database -> documented sentinel/edge-case behavior, no crash
- Edge case relevant to the function (ties, single department, N larger than total_students, etc.) handled correctly

---

## Issue #115: `get_top_n_students`

**File:** `src/issue_115.c`  
**Signature:** `int get_top_n_students(int n, Student *results);`  
**Time Complexity:** O(n log n)  
**Space Complexity:** O(n)

**What to do:** Get top N by grade.

**Requirements:**
- Combine existing building blocks (search/filter/sort/stats) as needed to compute the result
- Return the result using the type in the signature
- Handle empty-database and no-match cases explicitly
- Do not modify the global database unless the function is explicitly a mutator

**Test cases to satisfy:**
- Typical populated database -> result matches manual/expected calculation
- Empty database -> documented sentinel/edge-case behavior, no crash
- Edge case relevant to the function (ties, single department, N larger than total_students, etc.) handled correctly

---

## Issue #116: `get_bottom_n_students`

**File:** `src/issue_116.c`  
**Signature:** `int get_bottom_n_students(int n, Student *results);`  
**Time Complexity:** O(n log n)  
**Space Complexity:** O(n)

**What to do:** Get bottom N by grade.

**Requirements:**
- Combine existing building blocks (search/filter/sort/stats) as needed to compute the result
- Return the result using the type in the signature
- Handle empty-database and no-match cases explicitly
- Do not modify the global database unless the function is explicitly a mutator

**Test cases to satisfy:**
- Typical populated database -> result matches manual/expected calculation
- Empty database -> documented sentinel/edge-case behavior, no crash
- Edge case relevant to the function (ties, single department, N larger than total_students, etc.) handled correctly

---

## Issue #117: `identify_outliers`

**File:** `src/issue_117.c`  
**Signature:** `int identify_outliers(Student *results, int max_results);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(n)

**What to do:** Grades far from average.

**Requirements:**
- Combine existing building blocks (search/filter/sort/stats) as needed to compute the result
- Return the result using the type in the signature
- Handle empty-database and no-match cases explicitly
- Do not modify the global database unless the function is explicitly a mutator

**Test cases to satisfy:**
- Typical populated database -> result matches manual/expected calculation
- Empty database -> documented sentinel/edge-case behavior, no crash
- Edge case relevant to the function (ties, single department, N larger than total_students, etc.) handled correctly

---

## Issue #118: `get_grade_distribution`

**File:** `src/issue_118.c`  
**Signature:** `int get_grade_distribution(int *distribution);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(n)

**What to do:** Grade frequency breakdown.

**Requirements:**
- Combine existing building blocks (search/filter/sort/stats) as needed to compute the result
- Return the result using the type in the signature
- Handle empty-database and no-match cases explicitly
- Do not modify the global database unless the function is explicitly a mutator

**Test cases to satisfy:**
- Typical populated database -> result matches manual/expected calculation
- Empty database -> documented sentinel/edge-case behavior, no crash
- Edge case relevant to the function (ties, single department, N larger than total_students, etc.) handled correctly

---

## Issue #119: `compare_year_wise_performance`

**File:** `src/issue_119.c`  
**Signature:** `double compare_year_wise_performance(int year);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(n)

**What to do:** By year analysis.

**Requirements:**
- Combine existing building blocks (search/filter/sort/stats) as needed to compute the result
- Return the result using the type in the signature
- Handle empty-database and no-match cases explicitly
- Do not modify the global database unless the function is explicitly a mutator

**Test cases to satisfy:**
- Typical populated database -> result matches manual/expected calculation
- Empty database -> documented sentinel/edge-case behavior, no crash
- Edge case relevant to the function (ties, single department, N larger than total_students, etc.) handled correctly

---

## Issue #120: `get_semester_wise_average`

**File:** `src/issue_120.c`  
**Signature:** `double get_semester_wise_average(int semester);`  
**Time Complexity:** O(n)  
**Space Complexity:** O(n)

**What to do:** By semester stats.

**Requirements:**
- Combine existing building blocks (search/filter/sort/stats) as needed to compute the result
- Return the result using the type in the signature
- Handle empty-database and no-match cases explicitly
- Do not modify the global database unless the function is explicitly a mutator

**Test cases to satisfy:**
- Typical populated database -> result matches manual/expected calculation
- Empty database -> documented sentinel/edge-case behavior, no crash
- Edge case relevant to the function (ties, single department, N larger than total_students, etc.) handled correctly

---
