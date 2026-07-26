# Write your MySQL query statement below
SELECT DISTINCT(author_id) AS id
FROM Views
WHERE author_id = viewer_id
GROUP BY author_id
HAVING count(*) >= 1
ORDER BY author_id ASC