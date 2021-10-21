create database Countryy;  --   1
use countryy;    --  1
create table if not exists countrys(
country_id varchar(10) NOT NULL,       --  5
country_name char(20) NOT NULL,         -- 5
region_id decimal(10,0) NOT NULL,       -- 1,2,5
check(country_name in('Italy','India','China')),      -- 7
unique(country_id)                                        -- 9
);
desc countrys;      -- 1
-- select * from countriess;        --   1

create table if not exists dup_countriess        --  3
-- Like countriesss;                             -- 3
as select* from countriesss;                  --   4 

desc dup_countriess;

create table if not exists job(            --  6
job_id varchar(10) NOT NULL,                 --  6
job_title varchar(20) NOT NULL DEFAULT ' ',               --  6
min_salary decimal(6,0) DEFAULT 8000,                       --  6
max_salary decimal(6,0) DEFAULT NULL                    --  6
check(max_salary>=25000)                          --  6

);                                                 --  6
desc job;                                          --  6

create table if not exists job_histry(              -- 8
employee_id varchar(10) NOT NULL,                    -- 8
start_date date NOT NULL,                            -- 8
end_date date NOT NULL,                              -- 8
job_id varchar(10) NOT NULL,                         -- 8
department_id varchar(10) NOT NULL,                  -- 8
Check(end_date like '--/--/----')                    -- 8
);                                                   -- 8
desc job_histry;                                     -- 8

