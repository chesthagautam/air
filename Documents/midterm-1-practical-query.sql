create database company_c15;
use company_c15;
create table employee____3(
emp_namee char(20) NOT NULL,
emp_idd int NOT NULL,
emp_address varchar(20) NOT NULL,
emp_phn_no long NOT NULL,
emp_salary long NOT NULL,
PRIMARY KEY(emp_idd));
desc employee____3;
insert into employee____3 values('Anjali',1,'Jaipur',931408,50000);
desc employee____3;
insert into employee____3 values('Anshika',2,'Kota',744585,51000);
insert into employee____3 values('Muskaan',3,'Jaipur',820154,50000);
insert into employee____3 values('Aashna',5,'Bihar',799965,50000);
insert into employee____3 values('Kanika',4,'Jaipur',546461,48000);
select * from employee____3;
create table company_s(
comp_name varchar(20) NOT NULL,
emp_idd int NOT NULL,
ref_id int NOT NULL,
comp_address varchar(20) NOT NULL,
PRIMARY KEY(ref_id),
FOREIGN KEY(emp_idd)REFERENCES employee____3(emp_idd));
insert into company_s values('Apple',1,1001,'Jaipur');
insert into company_s values('Samsung',2,1002,'Udaipur');
insert into company_s values('MI',3,1003,'Jodhpur');
insert into company_s values('Oppo',5,1004,'Mumbai');
insert into company_s values('VIVO',4,1005,'Delhi');
select * from company_s;
select * from employee____3;
select * from company_s;