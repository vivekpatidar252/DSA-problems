-- Write your MySQL query here
with cte as 
(SELECT id , num , 
lag(num , 1) over (order by id ) as l1 ,
lag(num , 2) over (order by id ) as l2
FROM logs
)

SELECT distinct(num) as consecutiveNums
from cte 
where num = l1 and num = l2 
