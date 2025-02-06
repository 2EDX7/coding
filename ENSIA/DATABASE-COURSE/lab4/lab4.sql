-- 1. Connect as 'System'. List the “DICT” catalog. How many instances does it contain? Give its structure.
-- This query lists all views available in the DICT catalog. It also helps identify the number of entries (instances) in the catalog.
SELECT * FROM DICT;

-- 2. Give the role and structure of the following tables or views: ALL_TAB_COLUMNS, USER_USERS, ALL_CONSTRAINTS, and USER_TAB_PRIVS.
-- These DESC commands display the column names and data types of the specified views. 
DESC ALL_TAB_COLUMNS;  -- Structure of ALL_TAB_COLUMNS, showing table column metadata for all accessible tables.
DESC USER_USERS;       -- Structure of USER_USERS, showing user details for the connected user.
DESC ALL_CONSTRAINTS;  -- Structure of ALL_CONSTRAINTS, showing metadata about constraints on all accessible tables.
DESC USER_TAB_PRIVS;   -- Structure of USER_TAB_PRIVS, showing table privileges granted to the user.

-- 3. Find the username you are connected with.
-- This query returns the username of the current connected session.
SELECT USER FROM DUAL;

-- 4. Compare the structure and content of ALL_TAB_COLUMNS and USER_TAB_COLUMNS tables.
-- DESC commands compare the structure of the two views.
DESC ALL_TAB_COLUMNS; -- Structure for metadata of all accessible table columns.
DESC USER_TAB_COLUMNS; -- Structure for metadata of columns in the user's own tables.

-- SELECT queries compare the content for a specific table.
SELECT * FROM ALL_TAB_COLUMNS WHERE TABLE_NAME = '<table_name>'; -- Retrieves column details for accessible tables.
SELECT * FROM USER_TAB_COLUMNS WHERE TABLE_NAME = '<table_name>'; -- Retrieves column details for the user's own tables.

-- 5. Check that the tables created during the previous lab were created. Give all the information on these tables.
-- This query lists all user-owned tables with their details such as status, number of rows, etc.
SELECT * FROM USER_TABLES;

-- 6. List the tables of the "system" user and those of the DBASchool user (the Lab 1 user).
-- These queries list table names owned by the SYSTEM and DBASchool users.
SELECT TABLE_NAME FROM ALL_TABLES WHERE OWNER = 'SYSTEM'; -- Lists tables owned by the SYSTEM user.
SELECT TABLE_NAME FROM ALL_TABLES WHERE OWNER = 'DBASCHOOL'; -- Lists tables owned by the DBASchool user.

-- 7. Give the description of the attributes of the STUDENT and ENROLMENT tables.
-- This query retrieves column details such as name, data type, and constraints for the STUDENT and ENROLMENT tables.
SELECT * FROM USER_TAB_COLUMNS WHERE TABLE_NAME IN ('STUDENT', 'ENROLMENT');

-- 8. Verify that there is a foreign key reference between the tables EXAM and COURSE.
-- This query checks for foreign key constraints referencing EXAM and COURSE tables.
SELECT * FROM USER_CONSTRAINTS WHERE CONSTRAINT_TYPE = 'R' AND TABLE_NAME IN ('EXAM', 'COURSE');

-- 9. Give all the constraints created during the previous lab and the information that characterizes them.
-- This query retrieves all constraint information for user-owned tables, including types, names, and referenced tables.
SELECT * FROM USER_CONSTRAINTS;

-- 10. Find all the information needed to recreate the EXAM_RESULT table.
-- This query retrieves the DDL (CREATE TABLE statement) for the EXAM_RESULT table.
SELECT DBMS_METADATA.GET_DDL('TABLE', 'EXAM_RESULT') FROM DUAL;

-- 11. Find all privileges granted to Admin.
-- This query lists all table privileges (SELECT, INSERT, etc.) granted to the Admin user.
SELECT * FROM USER_TAB_PRIVS WHERE GRANTEE = 'ADMIN';

-- 12. Find the roles given to Admin.
-- This query lists all roles granted to the Admin user.
SELECT * FROM DBA_ROLE_PRIVS WHERE GRANTEE = 'ADMIN';

-- 13. Find all objects belonging to Admin.
-- This query retrieves all objects (tables, views, procedures, etc.) owned by the Admin user.
SELECT OBJECT_NAME, OBJECT_TYPE FROM ALL_OBJECTS WHERE OWNER = 'ADMIN';

-- 14. Find the owner of the EXAM_RESULT table.
-- This query retrieves the owner (schema) of the EXAM_RESULT table.
SELECT OWNER FROM ALL_TABLES WHERE TABLE_NAME = 'EXAM_RESULT';

-- 15. Give the size of the EXAM_RESULT table in KB.
-- This query retrieves the size of the EXAM_RESULT table in kilobytes.
SELECT SEGMENT_NAME, BYTES/1024 AS SIZE_KB FROM USER_SEGMENTS WHERE SEGMENT_NAME = 'EXAM_RESULT';

-- 16. Check the effect produced by each of the previous lab’s data definition commands on the dictionary.
-- This query lists all objects created or modified in the past 7 days.
SELECT * FROM USER_OBJECTS WHERE CREATED > SYSDATE - 7;
