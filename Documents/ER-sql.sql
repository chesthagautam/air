create database db_stu;
use db_stu;
create table student(st_name char(10), st_address char(10), st_id varchar(10), st_birthdate int);
desc student;
select * from student;
insert into student values('anjali','jawahar',123,30);
select * from student;
create table department(dep_name char(10), dep_code int, dep_phone int, dep_college char(10));
insert into department values('admission',123,911641111,'skit');
select * from department;
select * from student,department;




