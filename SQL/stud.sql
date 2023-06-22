create table student
(
    Name varchar(100) NOTNULL,
    usn char(n) unique NOTNULL,
    addr varchar(n) ,
    phone int(10) unique NOTNULL,
    dob date ,
),

desc student,

Insert into student('Name','usn','phone','dob')values('Mithun','1RN20CS085','6363700975','2002');

delete from student where phone = 6363700975

select Name
from student
where Name=Mithun and dob = 2002