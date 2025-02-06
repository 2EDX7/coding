--17- Suppose the salary of Pr.Sajida Laichi increased by 5000 DA. 
UPDATE TEACHER SET Salary = Salary + 5000 WHERE FirstName = 'Sajida' AND LastName = 'Laichi';

--18. For Courses in the month of January, add 5 five days to the start date. Disable constraint to allow editing. 
--Reactivate the constraint. 
--Disable the constraint:
ALTER TABLE COURSE_ASSIGNMENT DISABLE CONSTRAINT CHK_CourseDates;
--Update the courses:
UPDATE COURSE_ASSIGNMENT 
SET StartDate = StartDate + 5 
WHERE EXTRACT(MONTH FROM StartDate) = 1;
--Reactivate the constraint:
ALTER TABLE COURSE_ASSIGNMENT ENABLE CONSTRAINT CHK_CourseDates;

--19. Delete all ‘Object oriented programming’ course. What are the problems encountered? 
DELETE FROM COURSE WHERE CourseName = 'Object oriented programming';
--Foreign key violations if there are dependencies in the ENROLLMENT, EXAM, or COURSE_ASSIGNMENT tables that reference the course.
--20. How did you correct them
--You would need to delete or modify the dependent records first, or you can cascade the delete operation:
ALTER TABLE ENROLLMENT DROP CONSTRAINT FK_COURSE; -- Disable foreign key constraint for testing.
DELETE FROM COURSE WHERE CourseName = 'Object oriented programming';
