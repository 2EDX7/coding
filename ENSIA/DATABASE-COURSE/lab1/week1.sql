-- 4. Create the basic relationships.  
-- 5. Add all constraints 
CREATE TABLE Course (
    CourseID number ,
    CourseName VARCHAR2(80),
    CourseCoef NUMBER ,
    CourseCredits number ,
    constraint Pk_course primary key (CourseID));

CREATE TABLE ENROLLMENT (
    StudentID number ,
    CourseID number ,
    EnrollmentDate date ,
    FinalMark number , 
    constraint FK_ENROLLMENTsd FOREIGN KEY (StudentID) REFERENCES STUDENT(StudentID),
    constraint FK_ENROLLMENTcr FOREIGN key (CourseID) REFERENCES Course (CourseID))
;
ALTER TABLE enrollment
ADD CONSTRAINT PK_ENROLLMENT PRIMARY KEY (StudentID, CourseID);


CREATE TABLE TEACHER (
    TeacherID number , 
    CIV VARCHAR2(4) check (CIV in ('Mr', 'Miss', 'Mrs')), 
    FirstName VARCHAR2(50),
    LastName VARCHAR2(50), 
    Salary REAL check (Salary>0),
    Email VARCHAR2(100),
    Grade VARCHAR2(20) check (Grade in ('Assistant', 'Associate', 'Full Professor')),
    constraint PK_TEACHER primary key (TeacherID))
;

CREATE TABLE COURSE_ASSIGNMENT(
    CourseID number ,
    TeacherID number ,
    StartDate date  ,
    EndDate  date , 
    constraint FK_COURSE_ASSIGNMENTcr FOREIGN KEY (CourseID) REFERENCES Course(CourseID),
    constraint FK_COURSE_ASSIGNMENTth FOREIGN key (TeacherID) REFERENCES TEACHER (TeacherID),
    constraint PK_COURSE_ASSIGNMENT PRIMARY KEY (CourseID, TeacherID),
    check (StartDate < EndDate)  )
;

CREATE TABLE EXAM (
    ExamID number , 
    CourseID number , 
    ExamDate date , 
    ExamType VARCHAR2(10) check (ExamType in ('Midterm','Final','Quiz')) , 
    constraint PK_EXAM primary key (ExamID) ,
    constraint FK_EXAM FOREIGN key (CourseID) REFERENCES Course(CourseID))
;

CREATE TABLE EXAM_RESULT (
    ResultID number ,
    StudentID number , 
    ExamID number ,
    Score REAL check (Score>=0),
    constraint PK_EXAM_RESULT PRIMARY KEY (ResultID) , 
    constraint FK_EXAM_RESULTst FOREIGN key (StudentID) REFERENCES STUDENT (StudentID) , 
    constraint FK_EXAM_RESULTex FOREIGN key (ExamID) REFERENCES EXAM(ExamID))
; 


