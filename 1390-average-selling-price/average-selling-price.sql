# Write your MySQL query statement below
SELECT P.product_id , 
case  when sum(US.units) is not null then ROUND(SUM(P.price * US.units)/sum(units), 2 ) else 0 end   as average_price
FROM Prices P
left join UnitsSold US
on US.purchase_date between p.start_date AND p.end_date and P.product_id = US.product_id
GROUP BY P.product_id