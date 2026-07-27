# Write your MySQL query statement below
SELECT v.customer_id , COUNT(*) as count_no_trans
FROM (  SELECT visit_id 
        FROM Visits
        EXCEPT
        SELECT visit_id
        FROM Transactions
     ) t
JOIN Visits v
ON t.visit_id = v.visit_id     
GROUP BY v.customer_id     