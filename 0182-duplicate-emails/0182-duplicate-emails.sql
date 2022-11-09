# Write your MySQL query statement below
Select Email
from
(Select Email, count(Email)
from person
group by Email
having count(Email)>1) a