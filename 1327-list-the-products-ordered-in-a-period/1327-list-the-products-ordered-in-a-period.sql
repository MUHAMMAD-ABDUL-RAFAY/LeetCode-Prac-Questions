# Write your MySQL query statement below
select product_name,sum(unit) as unit from products p,orders o
where p.product_id = o.product_id
and year(order_date) = 2020
and month(order_date) = 2
group by product_name
having sum(unit) >= 100;

