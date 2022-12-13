# Write your MySQL query statement below
#order_number is the primary key

select customer_number from orders
group by customer_number
order by count(*) desc limit 1;
