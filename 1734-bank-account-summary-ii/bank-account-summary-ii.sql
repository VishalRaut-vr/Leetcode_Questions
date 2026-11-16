# Write your MySQL query statement below
select u.name as NAME,
       sum(t.amount) as BALANCE 
from Users u 
join Transactions t on u.account = t.account
group by u.account, u.name
having BALANCE > 10000;