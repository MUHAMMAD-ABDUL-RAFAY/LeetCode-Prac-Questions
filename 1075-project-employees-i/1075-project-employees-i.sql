# Write your MySQL query statement below
select project_id,round(sum(experience_years)/count(project_id),2) as average_years from project p,employee e
where p.employee_id = e.employee_id
group by project_id;