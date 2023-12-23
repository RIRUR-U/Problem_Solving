select email as Email from person 
Group By (email)

HAVING 
COUNT(*) > 1
