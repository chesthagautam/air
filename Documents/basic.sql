create database db_lab;
use db_lab;
create table student(st_id varchar(10),st_name char(10),address char(10));
desc student;
select * from student; 
select st_id,address from student;
create table colour(colour_id int,colour_code int,colour_name char(10));
insert into colour values(1001,001,'white');
select * from colour;


