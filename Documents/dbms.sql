create database company;
use company;
create table employee2(
name varchar(20) NOT NULL,
emp_id int NOT NULL,
ref_id int NOT NULL,
address varchar(20) NOT NULL,
phn_no long NOT NULL,
salary long NOT NULL,
PRIMARY KEY(emp_id));
desc employee;
insert into employee values('Harsh',1,'Jaipur',931408,50000);
desc employee;
insert into employee values('Ankit',2,'Kota',744585,51000);
insert into employee values('Dev',3,'Jaipur',820154,50000);
insert into employee values('Harshit',5,'Bihar',799965,50000);
insert into employee values('Ashish',4,'Jaipur',546461,48000);
select * from employee;
create table company(
c_name varchar(20) NOT NULL,
e_id int NOT NULL,
ref_id int NOT NULL,
c_address varchar(20) NOT NULL,
PRIMARY KEY(ref_id),
FOREIGN KEY(e_id)REFERENCES employee(emp_id));
insert into company values('Apple',1,1001,'Jaipur');
insert into company values('Samsung',2,1002,'Udaipur');
insert into company values('MI',3,1003,'Jodhpur');
insert into company values('Oppo',5,1004,'Mumbai');
insert into company values('VIVO',4,1005,'Delhi');
select * from company;
select * from employee;
select * from company;