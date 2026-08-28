# Write your MySQL query statement below
SELECT C.customer_id
FROM Customer C 
join Product P 
on C.product_key = P.product_key
GROUP BY customer_id
having count(distinct C.product_key) = (select count(distinct product_key)
                    from Product 
                   )