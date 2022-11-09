# Write your MySQL query statement below
select a.name as employee from employee a, employee b where a.salary > b.salary and a.managerId = b.id